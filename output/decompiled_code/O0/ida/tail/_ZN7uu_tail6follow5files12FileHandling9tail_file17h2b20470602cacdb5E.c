        char a5)
{
  void **v8; // rdi
  __int64 mut; // rax
  _OWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  const char *v14; // rdx
  _BOOL8 v15; // rax
  __int64 v16; // r13
  char v17; // al
  char *v18; // rbp
  __int64 v19; // r13
  _QWORD *v20; // rax
  void **v22; // [rsp+0h] [rbp-248h] BYREF
  void **v23; // [rsp+8h] [rbp-240h]
  __int64 v24; // [rsp+10h] [rbp-238h]
  __int64 v25; // [rsp+18h] [rbp-230h] BYREF
  unsigned __int64 v26[2]; // [rsp+20h] [rbp-228h] BYREF
  __int128 v27; // [rsp+30h] [rbp-218h]
  __int64 v28; // [rsp+40h] [rbp-208h]
  __int64 v29; // [rsp+48h] [rbp-200h]
  _QWORD v30[2]; // [rsp+50h] [rbp-1F8h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-1E8h] BYREF
  __int128 v32; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v33; // [rsp+80h] [rbp-1C8h]
  _QWORD v34[3]; // [rsp+88h] [rbp-1C0h] BYREF
  char v35; // [rsp+A0h] [rbp-1A8h]
  __int64 v36; // [rsp+A8h] [rbp-1A0h]
  __int128 v37; // [rsp+B0h] [rbp-198h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-188h]
  char *v39; // [rsp+C8h] [rbp-180h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-178h] BYREF
  _QWORD src[20]; // [rsp+D8h] [rbp-170h] BYREF
  _QWORD dest[26]; // [rsp+178h] [rbp-D0h] BYREF

  v28 = -1LL;
  v29 = 0LL;
  v26[0] = 0LL;
  v26[1] = 8LL;
  v27 = 0LL;
  v8 = (void **)a2;
  mut = uu_tail::follow::files::FileHandling::get_mut((__int64)v8);
  if ( !*(_QWORD *)(mut + 200)
    || (v8 = (void **)v26,
        a3 = (void **)(mut + 200),
        (v11 = uu_tail::chunks::BytesChunkBuffer::fill(v26, (_QWORD *)(mut + 200))) == 0LL) )
  {
    if ( !*((_QWORD *)&v27 + 1) )
    {
      v17 = 0;
      goto LABEL_28;
    }
    if ( a5 )
    {
      if ( *(_QWORD *)a2 == 0x8000000000000000LL )
        goto LABEL_9;
      if ( !*(_QWORD *)(a2 + 8) || *(__int64 *)(a2 + 16) < 0 )
        goto LABEL_31;
      std::path::Path::components(dest);
      std::path::Path::components(&v39);
      v8 = (void **)dest;
      a3 = (void **)&v39;
      if ( !(unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(dest, &v39) )
      {
LABEL_9:
        v8 = (void **)&v22;
        v13 = uu_tail::follow::files::FileHandling::get(a2) + 176;
        <alloc::string::String as core::clone::Clone>::clone(&v22, v13);
        if ( v23 && v24 >= 0 )
        {
          v30[0] = v23;
          v30[1] = v24;
          if ( (*(_BYTE *)(a2 + 72) & 1) != 0 )
          {
            v14 = (_BYTE *)(&dword_0 + 1);
            if ( (*(_BYTE *)(a2 + 73) & 1) == 0 )
              v14 = anon_ab742581333cf5e7f01380032d71b570_114_llvm_1562610066123874583;
            v15 = !(*(_BYTE *)(a2 + 73) & 1);
            v31[0] = v14;
            v31[1] = v15;
            dest[0] = v31;
            dest[1] = <&T as core::fmt::Display>::fmt;
            dest[2] = v30;
            dest[3] = <&T as core::fmt::Display>::fmt;
            v39 = (char *)&anon_ab742581333cf5e7f01380032d71b570_113_llvm_1562610066123874583;
            v40 = 3LL;
            src[2] = 0LL;
            src[0] = dest;
            src[1] = 2LL;
            v8 = (void **)&v39;
            std::io::stdio::_print(&v39);
            *(_BYTE *)(a2 + 73) = 0;
          }
          a3 = v22;
          if ( v22 )
          {
            v8 = v23;
            _rust_dealloc(v23, v22, 1LL);
          }
          goto LABEL_17;
        }
LABEL_31:
        core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
      }
    }
LABEL_17:
    v25 = std::io::stdio::stdout(v8, a3);
    v16 = std::io::stdio::Stdout::lock(&v25);
    dest[0] = v16;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v39, 0x2000LL, 0LL);
    if ( v39 )
      alloc::raw_vec::handle_error(v40, src[0]);
    v34[0] = v40;
    v34[1] = src[0];
    v34[2] = 0LL;
    v35 = 0;
    v36 = v16;
    v11 = uu_tail::chunks::BytesChunkBuffer::print((__int64)v26, v34);
    if ( v11 )
      goto LABEL_19;
    std::path::Path::to_path_buf(&v37);
    v33 = *(_QWORD *)(a2 + 16);
    v32 = *(_OWORD *)a2;
    *(_QWORD *)(a2 + 16) = v38;
    *(_OWORD *)a2 = v37;
    if ( (_QWORD)v32 != 0x8000000000000000LL )
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v32);
    std::sys::pal::unix::fs::stat(&v39);
    v18 = v39;
    v19 = v40;
    if ( v39 == (_BYTE *)&dword_0 + 2 )
    {
      std::io::error::repr_bitpacked::decode_repr(&v39, v40);
      if ( (unsigned __int8)v39 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v40);
    }
    else
    {
      memcpy(dest, src, 0xA0uLL);
    }
    v20 = (_QWORD *)uu_tail::follow::files::FileHandling::get_mut(a2);
    *v20 = v18;
    v20[1] = v19;
    memcpy(v20 + 2, dest, 0xA0uLL);
    v17 = 1;
LABEL_28:
    *(_BYTE *)(a1 + 8) = v17;
    *(_QWORD *)a1 = 0LL;
    goto LABEL_29;
  }
LABEL_19:
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = v12;
LABEL_29:
  core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<alloc::boxed::Box<uu_tail::chunks::BytesChunk>>>(v26);
  return a1;
}
