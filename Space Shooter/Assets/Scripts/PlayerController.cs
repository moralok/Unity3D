using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Boundary {
	public float xMin, xMax, zMin, zMax;
}

public class PlayerController : MonoBehaviour {


	public float speed;
	public float tilt;
	public Boundary boundary;

	public GameObject shot;
	public Transform shotSpawn;
	public float fireRate;

	private float nextFire;

	void Update () {
		if (Input.GetButton ("Fire1") && Time.time > nextFire) {
			nextFire = Time.time + fireRate;
//			GameObject clone = 
			Instantiate (shot, shotSpawn.position, shotSpawn.rotation);// as GameObject;
		}
		
	}

	// when using physics
	void FixedUpdate () {
		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");

		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);

		// Unity5取消了一些默认变量，因此需要变量并指向相关组件；规范了语言但同时使得C#复杂化
		Rigidbody rigidbody;
		rigidbody = GetComponent<Rigidbody> ();
		rigidbody.velocity = movement * speed;
		rigidbody.position = new Vector3 
		(
				Mathf.Clamp(rigidbody.position.x, boundary.xMin, boundary.xMax),
				0.0f,
				Mathf.Clamp(rigidbody.position.z, boundary.zMin, boundary.zMax)
		);

		rigidbody.rotation = Quaternion.Euler (0.0f, 0.0f, rigidbody.velocity.x * -tilt);
	}
}
