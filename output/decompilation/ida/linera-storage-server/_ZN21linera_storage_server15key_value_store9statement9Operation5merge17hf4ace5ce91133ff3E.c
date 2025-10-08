__int64 __fastcall linera_storage_server::key_value_store::statement::Operation::merge(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        _QWORD *a4)
{
  __int64 v4; // r14
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  int v10; // [rsp+Ch] [rbp-10Ch] BYREF
  __int128 v11; // [rsp+10h] [rbp-108h] BYREF
  __int128 v12; // [rsp+20h] [rbp-F8h]
  __int128 v13; // [rsp+30h] [rbp-E8h]
  __int64 v14; // [rsp+40h] [rbp-D8h]
  __int64 v15; // [rsp+48h] [rbp-D0h]
  __int128 v16; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-B0h]
  __int128 v18; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+80h] [rbp-98h]
  __int128 v20; // [rsp+88h] [rbp-90h] BYREF
  __int128 v21; // [rsp+98h] [rbp-80h]
  __int128 v22; // [rsp+A8h] [rbp-70h]
  __int64 v23; // [rsp+B8h] [rbp-60h]
  __int128 v24; // [rsp+C0h] [rbp-58h] BYREF
  __int128 v25; // [rsp+D0h] [rbp-48h]
  __int128 v26; // [rsp+E0h] [rbp-38h]
  _QWORD v27[5]; // [rsp+F0h] [rbp-28h] BYREF

  v10 = a2;
  switch ( a2 )
  {
    case 1:
      if ( *(_QWORD *)a1 == 0x8000000000000000LL )
        return prost::encoding::bytes::merge(a3, a1 + 8, *a4);
      *(_QWORD *)&v16 = 0LL;
      *((_QWORD *)&v16 + 1) = 1LL;
      v17 = 0LL;
      v4 = prost::encoding::bytes::merge(a3, &v16, *a4);
      *((_QWORD *)&v12 + 1) = a1;
      v11 = v16;
      *(_QWORD *)&v12 = v17;
      if ( v4 )
        goto LABEL_14;
      core::ptr::drop_in_place<core::option::Option<linera_storage_server::key_value_store::statement::Operation>>(a1);
      *(_QWORD *)a1 = 0x8000000000000000LL;
      *(_OWORD *)(a1 + 8) = v16;
      *(_QWORD *)(a1 + 24) = v17;
      return v4;
    case 2:
      if ( *(_QWORD *)a1 == 0x8000000000000001LL )
        return prost::encoding::message::merge(a3, a1 + 8, a4);
      *(_QWORD *)&v24 = 0LL;
      *((_QWORD *)&v24 + 1) = 1LL;
      v25 = 0LL;
      v26 = 1uLL;
      v4 = prost::encoding::message::merge(a3, &v24, a4);
      v14 = a1;
      v11 = v24;
      v12 = v25;
      v13 = v26;
      if ( v4 )
      {
        core::ptr::drop_in_place<linera_storage_server::key_value_store::statement::Operation::merge<&mut &mut tonic::codec::buffer::DecodeBuf>::{{closure}}>(&v11);
      }
      else
      {
        core::ptr::drop_in_place<core::option::Option<linera_storage_server::key_value_store::statement::Operation>>(a1);
        *(_QWORD *)a1 = 0x8000000000000001LL;
        v8 = v25;
        v9 = v26;
        *(_OWORD *)(a1 + 8) = v24;
        *(_OWORD *)(a1 + 24) = v8;
        *(_OWORD *)(a1 + 40) = v9;
      }
      return v4;
    case 3:
      if ( *(_QWORD *)a1 > (signed __int64)0x8000000000000004LL )
        return prost::encoding::message::merge(a3, a1, a4);
      *(_QWORD *)&v20 = 0LL;
      *((_QWORD *)&v20 + 1) = 1LL;
      v21 = 0LL;
      v22 = 1uLL;
      LOBYTE(v23) = 0;
      v4 = prost::encoding::message::merge(a3, &v20, a4);
      v15 = a1;
      v11 = v20;
      v12 = v21;
      v13 = v22;
      v14 = v23;
      if ( v4 )
      {
        core::ptr::drop_in_place<linera_storage_server::key_value_store::statement::Operation::merge<&mut &mut tonic::codec::buffer::DecodeBuf>::{{closure}}>(&v11);
      }
      else
      {
        core::ptr::drop_in_place<core::option::Option<linera_storage_server::key_value_store::statement::Operation>>(a1);
        *(_QWORD *)(a1 + 48) = v23;
        v6 = v20;
        v7 = v21;
        *(_OWORD *)(a1 + 32) = v22;
        *(_OWORD *)(a1 + 16) = v7;
        *(_OWORD *)a1 = v6;
      }
      return v4;
    case 4:
      if ( *(_QWORD *)a1 == 0x8000000000000003LL )
        return prost::encoding::bytes::merge(a3, a1 + 8, *a4);
      *(_QWORD *)&v18 = 0LL;
      *((_QWORD *)&v18 + 1) = 1LL;
      v19 = 0LL;
      v4 = prost::encoding::bytes::merge(a3, &v18, *a4);
      *((_QWORD *)&v12 + 1) = a1;
      v11 = v18;
      *(_QWORD *)&v12 = v19;
      if ( v4 )
      {
LABEL_14:
        core::ptr::drop_in_place<linera_storage_server::key_value_store::statement::Operation::merge<&mut &mut tonic::codec::buffer::DecodeBuf>::{{closure}}>(&v11);
      }
      else
      {
        core::ptr::drop_in_place<core::option::Option<linera_storage_server::key_value_store::statement::Operation>>(a1);
        *(_QWORD *)a1 = 0x8000000000000003LL;
        *(_OWORD *)(a1 + 8) = v18;
        *(_QWORD *)(a1 + 24) = v19;
      }
      return v4;
    default:
      v27[0] = &v10;
      v27[1] = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
      *(_QWORD *)&v11 = &off_A199E8;
      *((_QWORD *)&v11 + 1) = 1LL;
      *(_QWORD *)&v13 = 0LL;
      *(_QWORD *)&v12 = v27;
      *((_QWORD *)&v12 + 1) = 1LL;
      core::panicking::panic_fmt(&v11, &off_A199F8);
  }
}