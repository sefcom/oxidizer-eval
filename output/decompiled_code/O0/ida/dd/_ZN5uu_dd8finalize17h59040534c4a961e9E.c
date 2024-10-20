        char a8)
{
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // cf
  __int64 v17; // r12
  __int64 v18; // r14
  unsigned __int128 v19; // kr20_16
  _BOOL8 v20; // rtt
  __int64 v21; // rax
  __int128 v22; // xmm0
  int v23; // edx
  __int128 v24; // rax
  char **v26; // rdi
  unsigned __int64 v27; // [rsp+0h] [rbp-178h]
  __int64 v28; // [rsp+0h] [rbp-178h]
  unsigned __int64 v29; // [rsp+8h] [rbp-170h]
  __int128 v30; // [rsp+10h] [rbp-168h] BYREF
  __int64 v31; // [rsp+20h] [rbp-158h]
  __int128 *v32; // [rsp+30h] [rbp-148h]
  __int64 v33; // [rsp+38h] [rbp-140h]
  _QWORD v34[2]; // [rsp+40h] [rbp-138h] BYREF
  __int128 v35; // [rsp+50h] [rbp-128h]
  __int128 v36; // [rsp+60h] [rbp-118h]
  __int64 v37; // [rsp+70h] [rbp-108h] BYREF
  int v38; // [rsp+78h] [rbp-100h]
  __int64 v39; // [rsp+80h] [rbp-F8h] BYREF
  int v40; // [rsp+88h] [rbp-F0h]
  __int128 v41; // [rsp+90h] [rbp-E8h]
  __int128 v42; // [rsp+A0h] [rbp-D8h]
  __int64 v43; // [rsp+B0h] [rbp-C8h]
  __int64 v44; // [rsp+B8h] [rbp-C0h]
  __int64 v45; // [rsp+C0h] [rbp-B8h]
  __int64 v46; // [rsp+C8h] [rbp-B0h]
  char v47; // [rsp+D0h] [rbp-A8h]
  _BYTE v48[152]; // [rsp+E0h] [rbp-98h] BYREF

  v33 = a6;
  v32 = (__int128 *)a2;
  v37 = a4;
  v38 = a5;
  if ( *(_QWORD *)a1 == 0x8000000000000000LL )
  {
    v36 = 0LL;
    v35 = 0LL;
    v34[0] = 0LL;
    v10 = 8LL;
    v29 = 0LL;
    v27 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
  }
  else
  {
    a2 = a1;
    uu_dd::bufferedoutput::BufferedOutput::flush(v34, a1);
    if ( v34[0] )
    {
      v13 = v34[1];
LABEL_7:
      core::ptr::drop_in_place<std::thread::JoinInner<()>>(a7);
      goto LABEL_27;
    }
    v27 = *((_QWORD *)&v35 + 1);
    v29 = v35;
    v12 = *((_QWORD *)&v36 + 1);
    v11 = v36;
    v10 = (16 * (unsigned int)(*(_QWORD *)a1 != 0x8000000000000000LL)) | 8LL;
  }
  v13 = uu_dd::Output::sync(a1 + v10);
  if ( v13 )
    goto LABEL_7;
  if ( a8 )
  {
    if ( *(_QWORD *)a1 == 0x8000000000000000LL )
    {
      if ( *(_BYTE *)(a1 + 8) == 1 )
      {
        a2 = 2LL;
        if ( !<std::fs::File as std::io::Seek>::seek(a1 + 12, 2LL, 0LL) )
        {
          a2 = v14;
          v14 = std::fs::File::set_len(a1 + 12, v14);
        }
        if ( v14 )
        {
          a2 = v14;
          std::io::error::repr_bitpacked::decode_repr(&v30, v14);
          if ( (unsigned __int8)v30 >= 3u )
LABEL_21:
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v30 + 8);
        }
      }
    }
    else if ( *(_BYTE *)(a1 + 24) == 1 )
    {
      a2 = 2LL;
      if ( !<std::fs::File as std::io::Seek>::seek(a1 + 28, 2LL, 0LL) )
      {
        a2 = v14;
        v14 = std::fs::File::set_len(a1 + 28, v14);
      }
      if ( v14 )
      {
        a2 = v14;
        std::io::error::repr_bitpacked::decode_repr(&v30, v14);
        if ( (unsigned __int8)v30 >= 3u )
          goto LABEL_21;
      }
    }
  }
  v16 = __CFADD__(a3[2], v11);
  v17 = a3[2] + v11;
  if ( v16 )
  {
    v26 = &anon_bff3183e4c196cdaa7c150408020b06b_99_llvm_10102786401241998662;
    goto LABEL_31;
  }
  v16 = __CFADD__(a3[3], v12);
  v18 = a3[3] + v12;
  if ( v16 )
  {
    v26 = &anon_bff3183e4c196cdaa7c150408020b06b_100_llvm_10102786401241998662;
    goto LABEL_31;
  }
  v20 = __CFADD__(*a3, v29);
  v16 = __CFADD__(v20, v27) | __CFADD__(a3[1], v20 + v27);
  v19 = *(_OWORD *)a3 + __PAIR128__(v27, v29);
  v28 = a3[1] + v20 + v27;
  if ( v16 )
  {
    v26 = &anon_bff3183e4c196cdaa7c150408020b06b_101_llvm_10102786401241998662;
LABEL_31:
    core::panicking::panic_const::panic_const_add_overflow(v26, a2, v14, v15);
  }
  v21 = std::time::Instant::elapsed(&v37);
  v22 = *v32;
  v42 = v32[1];
  v41 = v22;
  v44 = v28;
  v43 = v19;
  v45 = v17;
  v46 = v18;
  v39 = v21;
  v40 = v23;
  v47 = 2;
  std::sync::mpmc::Sender<T>::send(v48, v33, &v39);
  v31 = *((_QWORD *)a7 + 2);
  v30 = *a7;
  *(_QWORD *)&v24 = std::thread::JoinInner<T>::join(&v30);
  if ( (_QWORD)v24 )
  {
    v30 = v24;
    core::result::unwrap_failed(
      aFailedToJoinWi,
      38LL,
      &v30,
      &anon_63782909c3cb7357905e62e141098beb_6_llvm_18118160920441741807,
      &off_143F58);
  }
  v13 = 0LL;
LABEL_27:
  core::ptr::drop_in_place<uu_dd::BlockWriter>(a1);
  return v13;
}
