__int64 __fastcall fuel_core_client::client::FuelClient::decode_response(__int64 a1, __int64 a2, __int128 *a3)
{
  char v4; // al
  __int64 result; // rax
  __int128 *v6; // r14
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // [rsp+0h] [rbp-F8h]
  __int128 v11; // [rsp+80h] [rbp-78h] BYREF
  __int64 v12; // [rsp+90h] [rbp-68h]
  _BYTE v13[24]; // [rsp+A0h] [rbp-58h] BYREF
  _BYTE v14[64]; // [rsp+B8h] [rbp-40h] BYREF

  fuel_core_client::client::FuelClient::update_chain_state_info(a2, a3);
  if ( *((_DWORD *)a3 + 38) == 2 || (v4 = *((_BYTE *)a3 + 184), v4 == 2) || (v4 & 1) == 0 )
  {
    v10 = *(__int128 *)((char *)a3 + 24);
    v11 = *a3;
    result = *((_QWORD *)a3 + 2);
    v12 = result;
    if ( (_QWORD)v10 == 0x8000000000000009LL )
    {
      if ( (_QWORD)v11 == 0x8000000000000000LL )
      {
        result = std::io::error::Error::new(40LL, aInvalidRespons, 16LL);
      }
      else
      {
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v14, a3);
        core::iter::traits::iterator::Iterator::collect(v13, v14);
        result = fuel_core_client::client::from_strings_errors_to_std_error(v13);
      }
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)a1 = 0x8000000000000009LL;
    }
    else
    {
      v6 = (__int128 *)((char *)a3 + 24);
      *(_OWORD *)(a1 + 112) = v6[7];
      *(_OWORD *)(a1 + 96) = v6[6];
      *(_OWORD *)(a1 + 80) = v6[5];
      *(_OWORD *)(a1 + 64) = v6[4];
      v7 = *v6;
      v8 = v6[1];
      v9 = v6[2];
      *(_OWORD *)(a1 + 48) = v6[3];
      *(_OWORD *)(a1 + 32) = v9;
      *(_OWORD *)(a1 + 16) = v8;
      *(_OWORD *)a1 = v7;
      if ( (_QWORD)v11 != 0x8000000000000000LL )
        return core::ptr::drop_in_place<alloc::vec::Vec<cynic::result::GraphQlError>>(&v11);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = std::io::error::Error::new(40LL, aTheRequiredBlo, 37LL);
    *(_QWORD *)a1 = 0x8000000000000009LL;
    return core::ptr::drop_in_place<fuel_core_client::reqwest_ext::FuelGraphQlResponse<fuel_core_client::client::schema::tx::TransactionStatusQuery>>(a3);
  }
  return result;
}