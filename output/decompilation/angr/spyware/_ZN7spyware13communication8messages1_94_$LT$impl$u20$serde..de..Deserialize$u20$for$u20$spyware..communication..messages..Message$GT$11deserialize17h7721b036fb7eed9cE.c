long long spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::Message>::deserialize(unsigned long long a0, unsigned long long a1)
{
    a0.deserialize_enum(a1, "Message", 7);
    return a0;
}
