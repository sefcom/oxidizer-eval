__int64 __fastcall sniffnet::report::types::report_col::ReportCol::get_value(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int8 a5)
{
  __int64 result; // rax
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  _BYTE v9[5]; // [rsp+3h] [rbp-25h] BYREF
  __int128 v10; // [rsp+8h] [rbp-20h] BYREF
  __int64 v11; // [rsp+18h] [rbp-10h]

  switch ( a2 )
  {
    case 0:
      result = <T as alloc::string::SpecToString>::spec_to_string(a1, a3 + 8);
      break;
    case 1:
      if ( (*(_BYTE *)a3 & 1) == 0 )
        goto LABEL_10;
      v6 = *(unsigned __int16 *)(a3 + 2);
      goto LABEL_9;
    case 2:
      result = <T as alloc::string::SpecToString>::spec_to_string(a1, a3 + 25);
      break;
    case 3:
      if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
      {
        v6 = *(unsigned __int16 *)(a3 + 6);
LABEL_9:
        v7 = core::fmt::num::imp::<impl u16>::_fmt(v6, v9, 5LL);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, v7, v8);
        result = v11;
        *(_QWORD *)(a1 + 16) = v11;
        *(_OWORD *)a1 = v10;
      }
      else
      {
LABEL_10:
        result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, asc_497943, 1LL);
      }
      break;
    case 4:
      result = <T as alloc::string::SpecToString>::spec_to_string(a1, a3 + 42);
      break;
    case 5:
      result = <T as alloc::string::SpecToString>::spec_to_string(a1, a4 + 26);
      break;
    case 6:
      if ( a5 )
      {
        if ( a5 == 1 )
          result = sniffnet::networking::types::data_representation::DataRepr::formatted_string(a1, 1u, *a4, a4[1]);
        else
          result = sniffnet::networking::types::data_representation::DataRepr::formatted_string(
                     a1,
                     a5,
                     8 * *a4,
                     *(__int128 *)a4 >> 61);
      }
      else
      {
        result = sniffnet::networking::types::data_representation::DataRepr::formatted_string(a1, 0, a4[2], a4[3]);
      }
      break;
  }
  return result;
}