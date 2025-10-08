unsigned __int64 __fastcall uu_whoami::platform::unix::get_username(unsigned __int64 *a1)
{
  __uid_t v1; // eax
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rcx
  _QWORD v4[3]; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD v5[17]; // [rsp+20h] [rbp-88h] BYREF

  v1 = uucore::features::process::geteuid();
  <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(v5, v1);
  if ( __OFSUB__(0LL, v5[0]) )
  {
    result = 0x8000000000000000LL;
    v3 = v5[1];
  }
  else
  {
    uucore::features::entries::uid2usr::{{closure}}(v4, v5);
    result = v4[0];
    v3 = v4[1];
    a1[2] = v4[2];
  }
  a1[1] = v3;
  *a1 = result;
  return result;
}