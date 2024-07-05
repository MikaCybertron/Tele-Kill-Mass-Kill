void MassKill(void* localPlayer, void* enemyPlayer) {
  
    void* playerTransform = UnityEngine::Component::get_transform(localPlayer);

    void* enemyTransform = UnityEngine::Component::get_transform(enemyPlayer);

    Vector3 playerLocation = UnityEngine::Transform::get_position(playerTransform);

    UnityEngine::Transform::set_position(enemyTransform, Vector3(playerLocation.X, playerLocation.Y, playerLocation.Z + 1));
}

void TeleKill(void* localPlayer, void* enemyPlayer) {
  
    void* playerTransform = UnityEngine::Component::get_transform(localPlayer);

    void* enemyTransform = UnityEngine::Component::get_transform(enemyPlayer);

    Vector3 enemyLocation = UnityEngine::Transform::get_position(enemyTransform);

    UnityEngine::Transform::set_position(playerTransform, Vector3(enemyLocation.X, enemyLocation.Y, enemyLocation.Z - 1));
}
