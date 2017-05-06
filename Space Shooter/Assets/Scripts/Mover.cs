using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mover : MonoBehaviour {

	public float speed;

	void Start () {
		Rigidbody rigitbody = GetComponent<Rigidbody> ();
		rigitbody.velocity = transform.forward * speed;				//means z


	}
}
