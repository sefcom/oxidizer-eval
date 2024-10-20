__int64 __fastcall uu_cp::show_error_if_needed(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  _QWORD *v5; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v6[2]; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD v7[2]; // [rsp+18h] [rbp-90h] BYREF
  _QWORD v8[2]; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v9[6]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v10[8]; // [rsp+68h] [rbp-40h] BYREF

  v5 = a1;
  result = 4LL;
  if ( (unsigned __int64)(*a1 - 2LL) < 0xB )
    result = *a1 - 2LL;
  if ( result != 3 && result != 6 )
  {
    v2 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v3 = *(_QWORD *)(v2 + 8);
    v4 = *(_QWORD *)(v2 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v3, 1LL, 1LL, v4);
    v7[0] = v3;
    v7[1] = v4;
    v6[0] = v7;
    v6[1] = <&T as core::fmt::Display>::fmt;
    v9[0] = &unk_1820C0;
    v9[1] = 2LL;
    v9[4] = 0LL;
    v9[2] = v6;
    v9[3] = 1LL;
    std::io::stdio::_eprint(v9);
    v8[0] = &v5;
    v8[1] = <&T as core::fmt::Display>::fmt;
    v10[0] = &unk_1820E0;
    v10[1] = 2LL;
    v10[4] = 0LL;
    v10[2] = v8;
    v10[3] = 1LL;
    return std::io::stdio::_eprint(v10);
  }
  return result;
}
