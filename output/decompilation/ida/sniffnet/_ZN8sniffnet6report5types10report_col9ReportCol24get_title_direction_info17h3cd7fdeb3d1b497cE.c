__int64 __fastcall sniffnet::report::types::report_col::ReportCol::get_title_direction_info(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE *v8; // [rsp+8h] [rbp-80h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+10h] [rbp-78h]
  __int128 v10; // [rsp+18h] [rbp-70h] BYREF
  __int64 v11; // [rsp+28h] [rbp-60h]
  char **v12; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h]
  _QWORD *v14; // [rsp+40h] [rbp-48h]
  __int64 v15; // [rsp+48h] [rbp-40h]
  __int64 v16; // [rsp+50h] [rbp-38h]
  _BYTE v17[40]; // [rsp+60h] [rbp-28h] BYREF

  if ( a2 < 2u )
  {
    v6 = sniffnet::translations::translations_2::source_translation(a3);
    alloc::str::<impl str>::to_lowercase(v17, v6);
    v8 = v17;
    v9 = <alloc::string::String as core::fmt::Display>::fmt;
    v12 = &off_2DFFB40;
    v13 = 2LL;
    v16 = 0LL;
    v14 = &v8;
    v15 = 1LL;
    core::option::Option<T>::map_or_else(&v10, 0LL, v7, &v12);
    goto LABEL_5;
  }
  result = (unsigned int)a2 - 2;
  if ( (unsigned int)result < 2 )
  {
    v4 = sniffnet::translations::translations_2::destination_translation(a3);
    alloc::str::<impl str>::to_lowercase(v17, v4);
    v8 = v17;
    v9 = <alloc::string::String as core::fmt::Display>::fmt;
    v12 = &off_2DFFB40;
    v13 = 2LL;
    v16 = 0LL;
    v14 = &v8;
    v15 = 1LL;
    core::option::Option<T>::map_or_else(&v10, 0LL, v5, &v12);
LABEL_5:
    core::ptr::drop_in_place<alloc::string::String>(v17);
    result = v11;
    *(_QWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v10;
    return result;
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}