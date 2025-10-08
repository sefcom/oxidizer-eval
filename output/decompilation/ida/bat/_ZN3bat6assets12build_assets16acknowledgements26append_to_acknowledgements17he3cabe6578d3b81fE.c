__int64 __fastcall bat::assets::build_assets::acknowledgements::append_to_acknowledgements(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rcx
  int v7; // edx
  __int64 v9; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v10[2]; // [rsp+10h] [rbp-68h] BYREF
  char **v11; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+28h] [rbp-50h]
  _QWORD *v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h]
  _QWORD v16[5]; // [rsp+50h] [rbp-28h] BYREF

  v10[0] = a4;
  v10[1] = a5;
  v16[0] = &v9;
  v16[1] = <&T as core::fmt::Display>::fmt;
  v16[2] = v10;
  v16[3] = <&T as core::fmt::Display>::fmt;
  v11 = &off_6CDFB8;
  v12 = 2LL;
  v15 = 0LL;
  v13 = v16;
  v14 = 2LL;
  ((void (__fastcall *)(__int64, char ***, __int64, _QWORD *, __int64, __int64, __int64, __int64))<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt)(
    a1,
    &v11,
    a3,
    v10,
    a5,
    a6,
    a2,
    a3);
  v6 = *(_QWORD *)(a1 + 8) + *(_QWORD *)(a1 + 16);
  v11 = *(char ***)(a1 + 8);
  v12 = v6;
  if ( (core::str::validations::next_code_point_reverse(&v11) & 1) == 0 )
    core::option::expect_failed(aAcknowledgemen_0, 40LL, &off_6CDFD8);
  if ( v7 != 10 )
    alloc::string::String::push(a1, 10LL);
  return <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
           a1,
           asc_9FF4A,
           aAcknowledgemen_0);
}