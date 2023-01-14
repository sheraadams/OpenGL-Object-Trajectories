int Game::RandomInt()
{
    int animalNum = rand() % 5 + 1;
    return animalNum;
}
void Game::ProcessInput(float dt)
{
    float velocity = PLAYER_VELOCITY * deltaTime;

    // gravity and trajectory effect
    Heart->Position.y += velocity / RandomInt();
    Heart2->Position.y += velocity / RandomInt();
    Heart3->Position.y += velocity / RandomInt();
    Heart4->Position.y += velocity;
    Heart5->Position.y += velocity;
    Heart->Position.x += velocity * RandomInt();
    Heart2->Position.x += velocity * RandomInt();
    Heart3->Position.x += velocity * RandomInt();
    Heart4->Position.x += velocity * RandomInt();
    Heart5->Position.x += velocity;

    // flying effect 1
    Birds->Position.x += velocity / AnimalNum();

    // flying effect 2
    Player2->Position.y += velocity / AnimalNum();
    if (Player2->Position.y <= this->Height - Player2->Size.y)
    {
        Player2->Position.y -= velocity / AnimalNum();
    }
    if (Player2->Position.x <= this->Height - 2 * Player2->Size.x)
    {
        Player2->Position.x -= velocity / AnimalNum();
}
