using UnityEngine;
using System.Collections;

public class ZombieSpawner : MonoBehaviour {

	public GameObject ZombieToClone;
	public Transform ZombieLord;

	void MakeZombie (){
		Instantiate (ZombieToClone, ZombieLord.position, Quaternion.Euler (0f, 0f, 0f));

	}
	
	void Start() {
		InvokeRepeating ("MakeZombie", 3f, 2f);
	}
}
