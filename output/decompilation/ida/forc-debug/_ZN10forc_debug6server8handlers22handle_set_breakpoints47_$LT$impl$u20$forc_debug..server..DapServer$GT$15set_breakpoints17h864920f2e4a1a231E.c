void *__fastcall forc_debug::server::handlers::handle_set_breakpoints::<impl forc_debug::server::DapServer>::set_breakpoints(
        char *dest,
        __int64 a2,
        _QWORD *a3)
{
  char v4; // al
  void *result; // rax
  __int64 inner; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+8h] [rbp-1290h] BYREF
  __int128 v10; // [rsp+10h] [rbp-1288h]
  __int128 v11; // [rsp+20h] [rbp-1278h] BYREF
  __int64 v12; // [rsp+30h] [rbp-1268h]
  __int128 v13; // [rsp+38h] [rbp-1260h] BYREF
  __int64 v14; // [rsp+48h] [rbp-1250h]
  _OWORD desta[15]; // [rsp+50h] [rbp-1248h] BYREF
  __int64 v16; // [rsp+140h] [rbp-1158h] BYREF
  _BYTE src[232]; // [rsp+148h] [rbp-1150h] BYREF
  _QWORD v18[244]; // [rsp+230h] [rbp-1068h] BYREF
  _OWORD v19[15]; // [rsp+9D0h] [rbp-8C8h] BYREF
  _BYTE v20[1952]; // [rsp+AC0h] [rbp-7D8h] BYREF

  v18[7] = 0LL;
  v4 = *(_BYTE *)(a2 + 2428);
  if ( v4 != 2 && (v4 & 1) == 0 )
  {
    forc_debug::server::DapServer::build_tests(&v16);
    memcpy(desta, src, 0xE8uLL);
    if ( v16 == 2 )
      return memcpy(dest, desta, 0xE8uLL);
    memcpy(v20, v18, sizeof(v20));
    memcpy((char *)v19 + 8, desta, 0xE8uLL);
    *(_QWORD *)&v19[0] = v16;
    core::ptr::drop_in_place<(forc_pkg::pkg::BuiltPackage,forc_test::setup::TestSetup)>(v19);
  }
  result = 0LL;
  if ( __OFSUB__(0LL, a3[3]) )
  {
    *dest = 44;
    return result;
  }
  LOBYTE(v16) = 44;
  core::ptr::drop_in_place<forc_debug::error::AdapterError>(&v16);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v13, a3[4]);
  inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a2 + 2376, &v13);
  if ( inner
    && (<alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v16, *(_QWORD *)(inner + 32), *(_QWORD *)(inner + 40)),
        v19[0] = *(_OWORD *)src,
        v16 != 0x8000000000000000LL) )
  {
    v10 = v19[0];
    v9 = v16;
    if ( a3[21] == 0x8000000000000000LL )
      goto LABEL_14;
  }
  else
  {
    v9 = 0LL;
    v10 = 8uLL;
    if ( a3[21] == 0x8000000000000000LL )
      goto LABEL_14;
  }
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v16, a3[22], a3[23]);
  desta[0] = *(_OWORD *)src;
  if ( v16 != 0x8000000000000000LL )
  {
    *(_OWORD *)((char *)v19 + 8) = desta[0];
    *(_QWORD *)&v19[0] = v16;
    v8 = *((_QWORD *)&desta[0] + 1);
    v7 = *(_QWORD *)&desta[0];
    goto LABEL_16;
  }
LABEL_14:
  *(_QWORD *)&v19[0] = 0LL;
  *((_QWORD *)&v19[0] + 1) = 8LL;
  *(_QWORD *)&v19[1] = 0LL;
  v7 = 8LL;
  v8 = 0LL;
LABEL_16:
  v16 = v7;
  *(_QWORD *)src = v7 + 96 * v8;
  *(_QWORD *)&src[8] = a2 + 2496;
  *(_QWORD *)&src[16] = a2 + 1624;
  *(_QWORD *)&src[24] = &v13;
  *(_QWORD *)&src[32] = &v9;
  *(_QWORD *)&src[40] = a3;
  core::iter::traits::iterator::Iterator::collect(&v11, &v16);
  core::ptr::drop_in_place<alloc::vec::Vec<dap::types::SourceBreakpoint>>(v19);
  *(_QWORD *)&v19[1] = v14;
  v19[0] = v13;
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v16, *((_QWORD *)&v11 + 1), v12);
  hashbrown::map::HashMap<K,V,S,A>::insert(desta, a2 + 2376, v19, &v16);
  core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<dap::types::Breakpoint>>>(desta);
  *(_BYTE *)(a2 + 2427) = 1;
  *((_QWORD *)dest + 3) = v12;
  *(_OWORD *)(dest + 8) = v11;
  *dest = 51;
  return (void *)core::ptr::drop_in_place<alloc::vec::Vec<dap::types::Breakpoint>>(&v9);
}