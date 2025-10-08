__int64 __fastcall fuel_core_client::client::schema::tx::<impl core::convert::TryFrom<fuel_core_client::client::schema::tx::ProgramState> for fuel_vm::state::ProgramState>::try_from(
        __int64 a1,
        __int128 *a2)
{
  int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // edi
  __int128 *v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v11; // [rsp+10h] [rbp-58h]
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v3 = *((unsigned __int8 *)a2 + 24);
  if ( !*((_BYTE *)a2 + 24) )
  {
    v13 = *((_QWORD *)a2 + 2);
    v12 = *a2;
    v7 = &v12;
    goto LABEL_7;
  }
  if ( v3 != 1 )
  {
    v15 = *((_QWORD *)a2 + 2);
    v14 = *a2;
    v7 = &v14;
LABEL_7:
    alloc::vec::<impl core::convert::TryFrom<alloc::vec::Vec<T,A>> for [T; N]>::try_from(&v10, v7);
    if ( __OFSUB__(-v10, 1LL) )
    {
      v8 = _byteswap_uint64(v11);
      *(_BYTE *)a1 = v3;
      *(_QWORD *)(a1 + 8) = v8;
    }
    else
    {
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v10, v11);
      *(_QWORD *)(a1 + 8) = 8LL;
      *(_BYTE *)a1 = 5;
    }
    return a1;
  }
  v4 = *((_QWORD *)a2 + 1);
  if ( *((_QWORD *)a2 + 2) == 32LL )
  {
    v5 = *(_QWORD *)(v4 + 7);
    *(_BYTE *)(a1 + 32) = *(_BYTE *)(v4 + 31);
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(v4 + 15);
    *(_BYTE *)a1 = 1;
    v6 = *(_DWORD *)(v4 + 3);
    *(_DWORD *)(a1 + 1) = *(_DWORD *)v4;
    *(_DWORD *)(a1 + 4) = v6;
    *(_QWORD *)(a1 + 8) = v5;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 8LL;
    *(_BYTE *)a1 = 5;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*(_QWORD *)a2, v4);
  return a1;
}