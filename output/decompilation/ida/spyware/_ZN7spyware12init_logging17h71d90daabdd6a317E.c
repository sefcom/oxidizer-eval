__int64 spyware::init_logging()
{
  unsigned __int8 v0; // al
  _QWORD v2[2]; // [rsp+0h] [rbp-18h] BYREF
  __int16 v3; // [rsp+10h] [rbp-8h]

  v3 = 257;
  v2[1] = 0x4000LL;
  v2[0] = 4LL;
  v0 = ((__int64 (__fastcall *)(_QWORD *))spyware::logging::core::setup_logging)(v2);
  return core::result::Result<T,E>::unwrap(v0);
}