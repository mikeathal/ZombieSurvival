struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

}

void RegisterAllClasses()
{
	//Total: 52 classes
	//0. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//6. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//7. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//8. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//9. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//10. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//11. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//12. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//13. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//14. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//15. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//16. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//17. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//18. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//19. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//20. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//21. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//22. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//23. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//24. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//25. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//26. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//27. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//28. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//29. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//30. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//31. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//32. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//33. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//34. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//35. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//36. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//37. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//38. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//39. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//40. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//41. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//42. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//43. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//44. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//45. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//46. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//47. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//48. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//49. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//50. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//51. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
