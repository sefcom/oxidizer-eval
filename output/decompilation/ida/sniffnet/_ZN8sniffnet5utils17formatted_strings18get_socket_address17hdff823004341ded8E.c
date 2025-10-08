__int64 __fastcall sniffnet::utils::formatted_strings::get_socket_address(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int16 a4)
{
  void *v4; // rax
  __int16 v6; // [rsp+Eh] [rbp-5Ah] BYREF
  _BYTE *v7; // [rsp+10h] [rbp-58h] BYREF
  _QWORD *v8; // [rsp+18h] [rbp-50h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+20h] [rbp-48h]
  __int16 *v10; // [rsp+28h] [rbp-40h]
  __int64 (__fastcall *v11)(); // [rsp+30h] [rbp-38h]
  _QWORD v12[6]; // [rsp+38h] [rbp-30h] BYREF

  v7 = a2;
  if ( (a3 & 1) == 0 )
    return <T as alloc::string::SpecToString>::spec_to_string(a1, a2);
  v6 = a4;
  if ( *a2 )
  {
    v8 = &v7;
    v9 = <&T as core::fmt::Display>::fmt;
    v10 = &v6;
    v11 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v4 = &off_2E01108;
  }
  else
  {
    v8 = &v7;
    v9 = <&T as core::fmt::Display>::fmt;
    v10 = &v6;
    v11 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v4 = &unk_2DFEF58;
  }
  v12[0] = v4;
  v12[1] = 2LL;
  v12[4] = 0LL;
  v12[2] = &v8;
  v12[3] = 2LL;
  return core::option::Option<T>::map_or_else(a1, 0LL, a3, v12);
}