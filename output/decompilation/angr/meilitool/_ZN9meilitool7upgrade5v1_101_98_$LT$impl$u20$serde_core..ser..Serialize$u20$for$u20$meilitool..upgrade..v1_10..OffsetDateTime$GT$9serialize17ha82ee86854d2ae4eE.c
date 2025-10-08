long long meilitool::upgrade::v1_10::_::<impl serde_core::ser::Serialize for meilitool::upgrade::v1_10::OffsetDateTime>::serialize(unsigned long long a0, unsigned long long a1)
{
    return time::serde::rfc3339::serialize(a0, a1);
}
