char __fastcall forc_debug::server::handlers::handle_variables::<impl forc_debug::server::DapServer>::get_variables(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char result; // al
  __int64 v7; // rdi
  unsigned int *v8; // rax
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdx
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int128 *v21; // rdi
  unsigned int v22; // [rsp+4h] [rbp-224h] BYREF
  __int128 v23; // [rsp+8h] [rbp-220h] BYREF
  __int64 v24; // [rsp+18h] [rbp-210h]
  __int128 v25; // [rsp+20h] [rbp-208h] BYREF
  __int64 v26; // [rsp+30h] [rbp-1F8h]
  __int128 v27; // [rsp+38h] [rbp-1F0h] BYREF
  __int128 v28; // [rsp+48h] [rbp-1E0h]
  __int64 v29; // [rsp+58h] [rbp-1D0h]
  __int128 v30; // [rsp+60h] [rbp-1C8h] BYREF
  __int128 v31; // [rsp+70h] [rbp-1B8h]
  __int64 v32; // [rsp+80h] [rbp-1A8h]
  __int128 v33; // [rsp+88h] [rbp-1A0h] BYREF
  __int64 v34; // [rsp+98h] [rbp-190h]
  __int128 v35; // [rsp+A0h] [rbp-188h]
  __int128 v36; // [rsp+B0h] [rbp-178h]
  __int64 v37; // [rsp+C0h] [rbp-168h]
  __int128 v38; // [rsp+C8h] [rbp-160h]
  __int128 v39; // [rsp+D8h] [rbp-150h]
  __int64 v40; // [rsp+E8h] [rbp-140h]
  __int128 v41; // [rsp+F0h] [rbp-138h]
  __int64 v42; // [rsp+100h] [rbp-128h]
  __int128 v43; // [rsp+110h] [rbp-118h] BYREF
  __int128 v44; // [rsp+120h] [rbp-108h]
  __int64 v45; // [rsp+130h] [rbp-F8h]
  __int128 v46; // [rsp+1F8h] [rbp-30h] BYREF
  __int64 v47; // [rsp+208h] [rbp-20h]

  result = a3 == 0;
  LOBYTE(v43) = 49;
  if ( a3 == 0 || a2 == 0 )
  {
    *(_BYTE *)a1 = 49;
    return result;
  }
  core::ptr::drop_in_place<forc_debug::error::AdapterError>(&v43);
  *(_QWORD *)&v43 = a2 + 864;
  *((_QWORD *)&v43 + 1) = a2 + 1376;
  *(_QWORD *)&v44 = 0LL;
  core::iter::traits::iterator::Iterator::collect(&v25, &v43);
  v7 = a2 + 72;
  v8 = (unsigned int *)<fuel_vm::interpreter::memory::MemoryInstance as core::ops::index::Index<core::ops::range::Range<usize>>>::index(
                         a2 + 72,
                         *(_QWORD *)(a2 + 888),
                         *(_QWORD *)(a2 + 888) + 4LL,
                         &off_1F8CE18);
  if ( v9 == 4 )
  {
    v7 = *v8;
    v10 = 0;
  }
  else
  {
    v10 = 1;
  }
  v11 = core::result::Result<T,E>::unwrap(v10 | (unsigned __int64)(v7 << 8));
  v12 = <fuel_asm::Instruction as core::convert::TryFrom<u32>>::try_from(_byteswap_ulong(v11));
  if ( (_BYTE)v12 == 119 )
  {
    *(_QWORD *)&v23 = 0LL;
    *((_QWORD *)&v23 + 1) = 8LL;
    v24 = 0LL;
    if ( a4 != 1 )
    {
      if ( a4 != 2 )
        goto LABEL_15;
LABEL_14:
      *(_QWORD *)(a1 + 24) = v24;
      *(_OWORD *)(a1 + 8) = v23;
      *(_BYTE *)a1 = 51;
LABEL_16:
      v21 = &v25;
      return core::ptr::drop_in_place<alloc::vec::Vec<dap::types::Variable>>(v21);
    }
  }
  else
  {
    LOBYTE(v22) = v12;
    HIBYTE(v22) = HIBYTE(v12);
    *(_WORD *)((char *)&v22 + 1) = v12 >> 8;
    v13 = alloc::alloc::Global::alloc_impl(8LL, 240LL, 0LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(8LL, 240LL);
    v14 = v13;
    LOBYTE(v30) = fuel_asm::Instruction::opcode(&v22);
    *(_QWORD *)&v27 = &v30;
    *((_QWORD *)&v27 + 1) = <fuel_asm::Opcode as core::fmt::Debug>::fmt;
    *(_QWORD *)&v43 = &xmmword_2D6AC0;
    *((_QWORD *)&v43 + 1) = 1LL;
    v45 = 0LL;
    *(_QWORD *)&v44 = &v27;
    *((_QWORD *)&v44 + 1) = 1LL;
    core::option::Option<T>::map_or_else(&v46, 0LL, v15, &v43);
    v36 = v46;
    v37 = v47;
    *(_QWORD *)&v35 = aOpcode;
    *((_QWORD *)&v35 + 1) = 6LL;
    forc_debug::server::handlers::handle_variables::ra(&v43, v22);
    *(_QWORD *)&v38 = aRa_1;
    *((_QWORD *)&v38 + 1) = 2LL;
    v39 = v43;
    v40 = v44;
    forc_debug::server::handlers::handle_variables::rb(&v43, v22);
    *(_QWORD *)&v30 = aRb_3;
    *((_QWORD *)&v30 + 1) = 2LL;
    v31 = v43;
    v32 = v44;
    forc_debug::server::handlers::handle_variables::rc(&v43, v22);
    *(_QWORD *)&v27 = aRc_1;
    *((_QWORD *)&v27 + 1) = 2LL;
    v28 = v43;
    v29 = v44;
    forc_debug::server::handlers::handle_variables::rd(&v33, v22);
    *(_QWORD *)&v43 = aRd_1;
    *((_QWORD *)&v43 + 1) = 2LL;
    v44 = v33;
    v45 = v34;
    forc_debug::server::handlers::handle_variables::imm(&v33, v22);
    v42 = v34;
    v41 = v33;
    *(_QWORD *)(v14 + 32) = v37;
    v16 = v35;
    *(_OWORD *)(v14 + 16) = v36;
    *(_OWORD *)v14 = v16;
    *(_QWORD *)(v14 + 72) = v40;
    v17 = v38;
    *(_OWORD *)(v14 + 56) = v39;
    *(_OWORD *)(v14 + 40) = v17;
    v18 = v31;
    *(_OWORD *)(v14 + 80) = v30;
    *(_OWORD *)(v14 + 96) = v18;
    *(_QWORD *)(v14 + 112) = v32;
    v19 = v28;
    *(_OWORD *)(v14 + 120) = v27;
    *(_OWORD *)(v14 + 136) = v19;
    *(_QWORD *)(v14 + 152) = v29;
    v20 = v44;
    *(_OWORD *)(v14 + 160) = v43;
    *(_OWORD *)(v14 + 176) = v20;
    *(_QWORD *)(v14 + 192) = v45;
    *(_QWORD *)(v14 + 200) = aImm;
    *(_QWORD *)(v14 + 208) = 3LL;
    *(_QWORD *)(v14 + 232) = v42;
    *(_OWORD *)(v14 + 216) = v41;
    *(_QWORD *)&v43 = 6LL;
    *((_QWORD *)&v43 + 1) = v14;
    *(_QWORD *)&v44 = 6LL;
    core::iter::traits::iterator::Iterator::collect(&v23, v14, v14 + 240);
    core::ptr::drop_in_place<alloc::vec::Vec<(&str,core::option::Option<alloc::string::String>)>>(&v43);
    if ( a4 == 2 )
      goto LABEL_14;
    if ( a4 != 1 )
    {
LABEL_15:
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 8LL;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_BYTE *)a1 = 51;
      core::ptr::drop_in_place<alloc::vec::Vec<dap::types::Variable>>(&v23);
      goto LABEL_16;
    }
  }
  *(_QWORD *)(a1 + 24) = v26;
  *(_OWORD *)(a1 + 8) = v25;
  *(_BYTE *)a1 = 51;
  v21 = &v23;
  return core::ptr::drop_in_place<alloc::vec::Vec<dap::types::Variable>>(v21);
}