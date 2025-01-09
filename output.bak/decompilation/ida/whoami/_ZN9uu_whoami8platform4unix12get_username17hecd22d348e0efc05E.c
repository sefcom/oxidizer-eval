__int64 __fastcall uu_whoami::platform::unix::get_username(_QWORD *a1)
{
  __uid_t v1; // eax
  __int64 result; // rax
  __int128 v3; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v4; // [rsp+18h] [rbp-90h] BYREF
  __int64 v5; // [rsp+20h] [rbp-88h]

  v1 = uucore::features::process::geteuid();
  <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(&v4, v1);
  if ( v4 == 0x8000000000000000LL )
  {
    result = v5;
    a1[1] = v5;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    uucore::features::entries::uid2usr::{{closure}}(&v3, &v4);
    return core::ops::function::FnOnce::call_once(a1, &v3);
  }
  return result;
}
