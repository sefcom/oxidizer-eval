__int64 __fastcall uu_rmdir::remove_single(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v12[4]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-68h] BYREF
  char v14; // [rsp+48h] [rbp-50h]
  _QWORD v15[9]; // [rsp+50h] [rbp-48h] BYREF

  if ( (a4 & 0x10000) != 0 )
  {
    v5 = uucore::util_name();
    v13[0] = 1LL;
    v13[1] = a2;
    v13[2] = a3;
    v14 = 1;
    v12[0] = &v11;
    v12[1] = <&T as core::fmt::Display>::fmt;
    v12[2] = v13;
    v12[3] = <os_display::Quoted as core::fmt::Display>::fmt;
    v15[0] = &unk_10EED0;
    v15[1] = 3LL;
    v15[4] = 0LL;
    v15[2] = v12;
    v15[3] = 2LL;
    ((void (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))std::io::stdio::_print)(
      v15,
      a2,
      v6,
      v7,
      v8,
      v9,
      v5,
      v6);
  }
  result = std::fs::remove_dir(a2, a3);
  if ( result )
  {
    a1[1] = a2;
    a1[2] = a3;
  }
  *a1 = result;
  return result;
}
