__int64 __fastcall forc_debug::server::state::ServerState::vm_pc_to_breakpoint_id(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  char v4; // bp
  __int64 inner; // r15
  __int64 v6; // rcx
  char map; // al
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // r14
  __int128 v12; // [rsp+0h] [rbp-158h] BYREF
  __int64 v13; // [rsp+10h] [rbp-148h]
  _BYTE v14[31]; // [rsp+20h] [rbp-138h] BYREF
  __int64 v15; // [rsp+48h] [rbp-110h] BYREF
  char v16; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v17[31]; // [rsp+51h] [rbp-107h]
  __int64 v18; // [rsp+70h] [rbp-E8h]
  _BYTE src[192]; // [rsp+78h] [rbp-E0h] BYREF

  forc_debug::server::state::ServerState::vm_pc_to_source_location((__int64)&v16, a2, a3);
  v4 = v16;
  if ( v16 == 51 )
  {
    *(_OWORD *)&v14[7] = *(_OWORD *)&v17[7];
    *(_QWORD *)&v14[23] = *(_QWORD *)&v17[23];
    v13 = *(_QWORD *)&v17[23];
    v12 = *(_OWORD *)&v17[7];
    v15 = v18;
    inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a2 + 2376, &v12);
    if ( !inner )
      goto LABEL_6;
    *(_QWORD *)&v17[7] = a3;
    v16 = 47;
    core::ptr::drop_in_place<forc_debug::error::AdapterError>(&v16);
    v6 = *(_QWORD *)(inner + 32) + 320LL * *(_QWORD *)(inner + 40);
    *(_QWORD *)v14 = *(_QWORD *)(inner + 32);
    *(_QWORD *)&v14[8] = v6;
    map = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(v14, &v15);
    *(_QWORD *)&v17[7] = a3;
    v16 = 47;
    if ( (map & 1) != 0 )
    {
      v9 = v8;
      core::ptr::drop_in_place<forc_debug::error::AdapterError>(&v16);
      *(_QWORD *)(a1 + 8) = v9;
      *(_BYTE *)a1 = 51;
    }
    else
    {
LABEL_6:
      *(_BYTE *)a1 = 47;
      *(_QWORD *)(a1 + 8) = a3;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v12, *((_QWORD *)&v12 + 1));
  }
  else
  {
    *(_OWORD *)&v14[15] = *(_OWORD *)&v17[15];
    *(_OWORD *)v14 = *(_OWORD *)v17;
    v10 = v18;
    memcpy((void *)(a1 + 40), src, 0xC0uLL);
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v14[15];
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v14;
    *(_BYTE *)a1 = v4;
    *(_QWORD *)(a1 + 32) = v10;
  }
  return a1;
}