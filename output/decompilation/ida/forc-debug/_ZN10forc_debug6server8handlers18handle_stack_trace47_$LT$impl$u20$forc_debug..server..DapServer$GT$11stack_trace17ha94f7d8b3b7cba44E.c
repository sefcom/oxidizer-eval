void __fastcall forc_debug::server::handlers::handle_stack_trace::<impl forc_debug::server::DapServer>::stack_trace(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r15
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v10; // [rsp+0h] [rbp-2A8h] BYREF
  __int64 v11; // [rsp+10h] [rbp-298h]
  __int128 v12; // [rsp+20h] [rbp-288h] BYREF
  __int64 v13; // [rsp+30h] [rbp-278h]
  __int128 v14; // [rsp+38h] [rbp-270h] BYREF
  __int64 v15; // [rsp+48h] [rbp-260h]
  __int64 v16; // [rsp+50h] [rbp-258h] BYREF
  _QWORD src[21]; // [rsp+58h] [rbp-250h] BYREF
  _QWORD v18[21]; // [rsp+138h] [rbp-170h] BYREF
  _BYTE dest[168]; // [rsp+1E0h] [rbp-C8h] BYREF

  if ( !a2[217] )
  {
    *(_BYTE *)a1 = 49;
    return;
  }
  v2 = a2[216];
  LOBYTE(v16) = 49;
  core::ptr::drop_in_place<forc_debug::error::AdapterError>(&v16);
  <alloc::string::String as core::clone::Clone>::clone(&v14, v2 + 2592);
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    *(_QWORD *)&v10 = a2[1];
    hashbrown::map::HashMap<K,V,S,A>::iter(v18, a2 + 297);
    a2 = v18;
    core::iter::traits::iterator::Iterator::try_fold(&v16, v18, &v10);
    v3 = v16;
    if ( v16 == 0x8000000000000002LL )
    {
      core::ptr::drop_in_place<core::option::Option<(core::option::Option<dap::types::Source>,i64)>>(&v16);
      goto LABEL_11;
    }
  }
  else
  {
    v6 = forc_debug::server::util::current_instruction(*(_QWORD *)(v2 + 888), *(_QWORD *)(v2 + 960));
    forc_debug::server::state::ServerState::vm_pc_to_source_location(&v16, a2, v6);
    if ( (_BYTE)v16 != 51 )
    {
      core::ptr::drop_in_place<core::result::Result<(std::path::PathBuf,i64),forc_debug::error::AdapterError>>(&v16);
      goto LABEL_11;
    }
    v10 = *(_OWORD *)&src[1];
    v11 = src[3];
    v5 = -src[0];
    if ( __OFSUB__(-src[0], 1LL) )
    {
LABEL_11:
      v12 = v14;
      v13 = v15;
      core::ptr::drop_in_place<forc_debug::server::handlers::handle_stack_trace::<impl forc_debug::server::DapServer>::stack_trace::{{closure}}>(
        &v12,
        a2,
        v4,
        v5);
      v7 = 8LL;
      v9 = 0LL;
      v8 = 0LL;
      goto LABEL_12;
    }
    v18[3] = v11;
    *(_OWORD *)&v18[1] = v10;
    v18[0] = src[0];
    forc_debug::server::handlers::handle_stack_trace::<impl forc_debug::server::DapServer>::stack_trace::{{closure}}(&v16);
    v3 = v16;
  }
  memcpy(dest, src, sizeof(dest));
  memcpy(v18, dest, sizeof(v18));
  v12 = v14;
  v13 = v15;
  memcpy(src, v18, sizeof(src));
  v16 = v3;
  forc_debug::server::handlers::handle_stack_trace::<impl forc_debug::server::DapServer>::stack_trace::{{closure}}(
    &v10,
    &v12,
    &v16);
  v7 = *((_QWORD *)&v10 + 1);
  v8 = v10;
  v9 = v11;
LABEL_12:
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = v9;
  *(_BYTE *)a1 = 51;
}