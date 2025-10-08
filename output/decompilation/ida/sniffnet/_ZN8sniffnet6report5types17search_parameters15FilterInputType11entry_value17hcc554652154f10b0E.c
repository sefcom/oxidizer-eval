__int64 __fastcall sniffnet::report::types::search_parameters::FilterInputType::entry_value(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5)
{
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  char *v10; // rsi
  __int128 v11; // [rsp+8h] [rbp-80h] BYREF
  __int128 v12; // [rsp+18h] [rbp-70h]
  __int64 v13; // [rsp+28h] [rbp-60h]
  __int128 v14; // [rsp+30h] [rbp-58h]
  __int64 v15; // [rsp+40h] [rbp-48h]
  __int128 v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+58h] [rbp-30h]
  __int64 v18; // [rsp+60h] [rbp-28h]
  char v19; // [rsp+68h] [rbp-20h] BYREF
  _BYTE v20[21]; // [rsp+73h] [rbp-15h] BYREF

  switch ( a2 )
  {
    case 0:
      v5 = a3 + 8;
      return <T as alloc::string::SpecToString>::spec_to_string(a1, v5);
    case 1:
      if ( (*(_BYTE *)a3 & 1) == 0 )
        goto LABEL_14;
      v7 = *(unsigned __int16 *)(a3 + 2);
      goto LABEL_13;
    case 2:
      v5 = a3 + 25;
      return <T as alloc::string::SpecToString>::spec_to_string(a1, v5);
    case 3:
      if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
      {
        v7 = *(unsigned __int16 *)(a3 + 6);
LABEL_13:
        v8 = core::fmt::num::imp::<impl u16>::_fmt(v7, v20, 5LL);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, v8, v9);
        result = v12;
        *(_QWORD *)(a1 + 16) = v12;
        *(_OWORD *)a1 = v11;
      }
      else
      {
LABEL_14:
        result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, asc_497943, 1LL);
      }
      break;
    case 4:
      return <T as alloc::string::SpecToString>::spec_to_string(a1, a3 + 42);
    case 5:
      return <T as alloc::string::SpecToString>::spec_to_string(a1, a4 + 208);
    case 6:
      *(_QWORD *)&v11 = 0LL;
      *((_QWORD *)&v11 + 1) = 1LL;
      v12 = 0LL;
      v13 = 1LL;
      v14 = 0LL;
      v15 = 1LL;
      v16 = 0LL;
      v17 = 1LL;
      v18 = 0LL;
      v19 = -7;
      v10 = (char *)(a5 + 6);
      if ( !a5 )
        v10 = &v19;
      <T as alloc::string::SpecToString>::spec_to_string(a1, v10);
      goto LABEL_22;
    case 7:
      *(_QWORD *)&v11 = 0LL;
      *((_QWORD *)&v11 + 1) = 1LL;
      v12 = 0LL;
      v13 = 1LL;
      v14 = 0LL;
      v15 = 1LL;
      v16 = 0LL;
      v17 = 1LL;
      v18 = 0LL;
      v19 = -7;
      if ( !a5 )
        a5 = &v11;
      <alloc::string::String as core::clone::Clone>::clone(a1, a5);
      goto LABEL_22;
    case 8:
      *(_QWORD *)&v11 = 0LL;
      *((_QWORD *)&v11 + 1) = 1LL;
      v12 = 0LL;
      v13 = 1LL;
      v14 = 0LL;
      v15 = 1LL;
      v16 = 0LL;
      v17 = 1LL;
      v18 = 0LL;
      v19 = -7;
      if ( !a5 )
        a5 = &v11;
      <alloc::string::String as core::clone::Clone>::clone(a1, (char *)a5 + 72);
LABEL_22:
      result = core::ptr::drop_in_place<(alloc::string::String,sniffnet::networking::types::host::Host)>(&v11);
      break;
  }
  return result;
}