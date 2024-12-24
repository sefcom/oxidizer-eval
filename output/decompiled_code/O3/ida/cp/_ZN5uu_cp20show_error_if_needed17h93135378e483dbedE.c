__int64 __fastcall uu_cp::show_error_if_needed(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 (__fastcall *v3)(); // rdx
  _QWORD **v4; // [rsp+0h] [rbp-68h] BYREF
  __int64 (__fastcall *v5)(); // [rsp+8h] [rbp-60h]
  _QWORD *v6; // [rsp+10h] [rbp-58h] BYREF
  void *v7; // [rsp+18h] [rbp-50h] BYREF
  __int64 v8; // [rsp+20h] [rbp-48h]
  _QWORD *v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  _QWORD v12[4]; // [rsp+48h] [rbp-20h] BYREF

  v6 = a1;
  result = 4LL;
  if ( (unsigned __int64)(*a1 - 2LL) < 0xB )
    result = *a1 - 2LL;
  if ( result != 3 && result != 6 )
  {
    v4 = (_QWORD **)uucore::util_name(a1, a2);
    v5 = v3;
    v12[0] = &v4;
    v12[1] = <&T as core::fmt::Display>::fmt;
    v7 = &unk_1B55F8;
    v8 = 2LL;
    v11 = 0LL;
    v9 = v12;
    v10 = 1LL;
    std::io::stdio::_eprint(&v7);
    v4 = &v6;
    v5 = <&T as core::fmt::Display>::fmt;
    v7 = &unk_1B5618;
    v8 = 2LL;
    v11 = 0LL;
    v9 = &v4;
    v10 = 1LL;
    return std::io::stdio::_eprint(&v7);
  }
  return result;
}
