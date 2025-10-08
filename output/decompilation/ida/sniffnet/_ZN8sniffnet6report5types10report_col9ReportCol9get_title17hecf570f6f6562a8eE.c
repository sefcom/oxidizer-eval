__int64 __fastcall sniffnet::report::types::report_col::ReportCol::get_title(
        __int64 a1,
        char a2,
        unsigned __int8 a3,
        char a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  const char *label; // rsi
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int128 v10; // [rsp+8h] [rbp-60h] BYREF
  __int64 v11; // [rsp+18h] [rbp-50h]
  _BYTE v12[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  _BYTE v15[40]; // [rsp+40h] [rbp-28h] BYREF

  switch ( a2 )
  {
    case 0:
    case 2:
      v4 = sniffnet::translations::translations::address_translation(a3);
      goto LABEL_7;
    case 1:
    case 3:
      return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
               a1,
               (char *)dword_18E9FB8 + dword_18E9FB8[a3],
               qword_18E9F00[a3]);
    case 4:
      v4 = sniffnet::translations::translations::protocol_translation(a3);
      goto LABEL_7;
    case 5:
      v4 = sniffnet::translations::translations_3::service_translation(a3);
LABEL_7:
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, v4, v5);
      result = v11;
      *(_QWORD *)(a1 + 16) = v11;
      *(_OWORD *)a1 = v10;
      break;
    case 6:
      label = sniffnet::networking::types::data_representation::DataRepr::get_label(a4, a3);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v12, label, v8);
      v9 = alloc::string::String::remove(v12);
      core::unicode::unicode_data::conversions::to_upper(v15, v9);
      core::char::CaseMappingIter::new(&v10, v15);
      <T as alloc::string::SpecToString>::spec_to_string(v15, &v10);
      <alloc::string::String as core::ops::arith::Add<&str>>::add(a1, v15, v13, v14);
      result = core::ptr::drop_in_place<alloc::string::String>(v12);
      break;
  }
  return result;
}