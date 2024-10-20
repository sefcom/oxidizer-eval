_QWORD *__fastcall uu_wc::Inputs::try_iter::{{closure}}(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  const char *v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int128 *v12; // rax
  unsigned __int128 v13; // xmm0
  _BYTE v14[24]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v15[24]; // [rsp+18h] [rbp-90h] BYREF
  __int128 v16; // [rsp+30h] [rbp-78h] BYREF
  __int64 v17; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int128 v18; // [rsp+50h] [rbp-58h]
  unsigned __int128 v19; // [rsp+60h] [rbp-48h]
  __int128 v20; // [rsp+70h] [rbp-38h]
  __int64 v21; // [rsp+80h] [rbp-28h]

  (*(void (__fastcall **)(_BYTE *, __int64))(a2[4] + 24))(v15, a2[3]);
  v3 = *(_QWORD *)v15;
  if ( *(_QWORD *)v15 == 0x8000000000000003LL )
  {
    *a1 = 0x8000000000000003LL;
    return a1;
  }
  v21 = *(_QWORD *)&v15[16];
  v20 = *(_OWORD *)v15;
  v4 = a2[5] + 1;
  if ( a2[5] == -1 )
    core::panicking::panic_const::panic_const_add_overflow(&anon_77474d128c52bab738a0ce88bc24ae41_1_llvm_9737630618734806200);
  a2[5] = v4;
  *(_OWORD *)&v14[8] = *(_OWORD *)&v15[8];
  *(_QWORD *)v14 = v3;
  if ( (unsigned __int64)(v3 + 0x7FFFFFFFFFFFFFFFLL) < 2 )
  {
LABEL_9:
    a1[2] = *(_QWORD *)&v14[16];
    *(_OWORD *)a1 = *(_OWORD *)v14;
    return a1;
  }
  if ( v3 != 0x8000000000000000LL && (!*(_QWORD *)&v14[8] || *(__int64 *)&v14[16] < 0) )
    goto LABEL_27;
  if ( *(_QWORD *)&v14[16] )
    goto LABEL_9;
  v17 = 0LL;
  v16 = *(_OWORD *)v14;
  v6 = *a2;
  if ( *a2 == 0x8000000000000001LL )
  {
    v7 = 1LL;
    v8 = anon_f24642c09166824134b4a04b26eaa90d_11_llvm_11289963011487936703;
    v9 = 0x8000000000000000LL;
LABEL_19:
    v18 = __PAIR128__((unsigned __int64)v8, v9);
    *(_QWORD *)&v19 = v7;
    *((_QWORD *)&v19 + 1) = v4;
    goto LABEL_20;
  }
  if ( v6 != 0x8000000000000002LL )
  {
    v10 = a2[1];
    v11 = a2[2];
    if ( v6 == 0x8000000000000000LL || v10 && v11 >= 0 )
    {
      uucore::features::quoting_style::escape_name_inner(
        v15,
        v10,
        v11,
        &anon_f24642c09166824134b4a04b26eaa90d_12_llvm_11289963011487936703,
        0LL);
      v8 = *(const char **)&v15[8];
      v9 = *(_QWORD *)v15;
      v7 = *(_QWORD *)&v15[16];
      goto LABEL_19;
    }
LABEL_27:
    core::panicking::panic_nounwind(anon_dd263a7f757787748cb25eec96e5d9c9_4_llvm_2301497830685427482, 162LL);
  }
  *(_QWORD *)&v18 = 0x8000000000000003LL;
LABEL_20:
  v12 = (unsigned __int128 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !v12 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v13 = v18;
  v12[1] = v19;
  *v12 = v13;
  *a1 = 0x8000000000000002LL;
  a1[1] = v12;
  a1[2] = &anon_56f426745e7d4c5372634db4f0431a2b_25_llvm_8267291718986063344;
  if ( (_QWORD)v16 != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v15, &v16);
    if ( *(_QWORD *)&v15[8] )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
        &v17,
        *(_QWORD *)v15,
        *(_QWORD *)&v15[8],
        *(_QWORD *)&v15[16]);
  }
  if ( *(_QWORD *)v14 == 0x8000000000000002LL )
    core::ptr::drop_in_place<core::result::Result<uu_wc::Input,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v14);
  return a1;
}
