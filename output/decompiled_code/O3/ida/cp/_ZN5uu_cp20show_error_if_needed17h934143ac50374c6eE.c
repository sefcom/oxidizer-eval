__int64 __fastcall uu_cp::show_error_if_needed(_QWORD *a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v2)(); // rdx
  _QWORD *v3; // [rsp+0h] [rbp-68h] BYREF
  __int64 (__fastcall *v4)(); // [rsp+8h] [rbp-60h]
  _QWORD *v5; // [rsp+10h] [rbp-58h] BYREF
  void *v6; // [rsp+18h] [rbp-50h] BYREF
  __int64 v7; // [rsp+20h] [rbp-48h]
  _QWORD *v8; // [rsp+28h] [rbp-40h]
  __int64 v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  _QWORD v11[4]; // [rsp+48h] [rbp-20h] BYREF

  v5 = a1;
  result = 4LL;
  if ( (unsigned __int64)(*a1 - 2LL) < 0xB )
    result = *a1 - 2LL;
  if ( result != 3 && result != 6 )
  {
    v3 = (_QWORD *)uucore::util_name();
    v4 = v2;
    v11[0] = &v3;
    v11[1] = <&T as core::fmt::Display>::fmt;
    v6 = &unk_1B5CC8;
    v7 = 2LL;
    v10 = 0LL;
    v8 = v11;
    v9 = 1LL;
    std::io::stdio::_eprint(&v6);
    v3 = &v5;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &unk_1B5CE8;
    v7 = 2LL;
    v10 = 0LL;
    v8 = &v3;
    v9 = 1LL;
    return std::io::stdio::_eprint(&v6);
  }
  return result;
}
