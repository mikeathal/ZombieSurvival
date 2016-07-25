using UnityEngine;
using System.Collections;

public class ZombieFollow : MonoBehaviour {

	public Transform destination;

	void Start() {
		if (destination == null) {
			destination = GameObject.FindWithTag ("Player").transform;
		}
	}

	void Update () {

		// "stopping distance"... only move if we are more than 0.5 units away
		if (Vector3.Distance (transform.position, destination.position) > 0.12f) {
			// multiplying by Time.deltaTime make a behavior framerate independent
			transform.position += Vector3.Normalize (destination.position - transform.position) * Time.deltaTime * 0.2f;
		}
	}

	void OnDrawGizmos () {
		// will draw a lin inside the scene view
		Gizmos.DrawLine (transform.position, destination.position);

	}
}
