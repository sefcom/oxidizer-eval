__int64 __fastcall uu_shuf::shuf_exec(__int64 a1, __int128 *a2)
{
  __int64 v2; // r15
  __int64 *v3; // rax
  __int64 *v4; // rdx
  __int64 (__fastcall **v5)(); // rcx
  __int64 v6; // r15
  char v7; // bp
  int v8; // ebp
  __int64 *v9; // rax
  __int64 *v10; // r15
  __int64 v11; // r13
  const void *v12; // rax
  size_t v13; // rdx
  __int64 v14; // r12
  size_t v15; // r15
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rax
  __int128 v20; // rax
  const void *v21; // rax
  size_t v22; // rdx
  __int64 v23; // r12
  size_t v24; // r15
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  _OWORD *v31; // rax
  __int128 v32; // xmm0
  __int128 v34; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v35; // [rsp+10h] [rbp-A8h]
  int v36; // [rsp+28h] [rbp-90h] BYREF
  int fd; // [rsp+2Ch] [rbp-8Ch]
  __int64 v38; // [rsp+30h] [rbp-88h] BYREF
  __int64 v39; // [rsp+38h] [rbp-80h] BYREF
  __int64 v40; // [rsp+40h] [rbp-78h]
  __int64 v41; // [rsp+48h] [rbp-70h] BYREF
  __int64 v42; // [rsp+50h] [rbp-68h]
  __int64 v43; // [rsp+58h] [rbp-60h]
  _BYTE v44[64]; // [rsp+78h] [rbp-40h] BYREF

  if ( *(_QWORD *)a2 == 0x8000000000000000LL )
  {
    v2 = std::io::stdio::stdout(a1);
    v3 = (__int64 *)_rust_alloc(8LL, 8LL);
    if ( !v3 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v4 = v3;
    *v3 = v2;
    v5 = (__int64 (__fastcall **)())&unk_EF818;
    goto LABEL_8;
  }
  *(_QWORD *)&v35 = *((_QWORD *)a2 + 2);
  v34 = *a2;
  std::fs::File::create(v44, *((_QWORD *)&v34 + 1));
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v39,
    v44,
    &v34);
  v6 = v39;
  if ( !v39 )
  {
    v8 = v40;
    v9 = (__int64 *)_rust_alloc(4LL, 4LL);
    if ( !v9 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    v10 = v9;
    *(_DWORD *)v9 = v8;
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v34);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34);
    v5 = &off_EF868;
    v4 = v10;
LABEL_8:
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v41, 0x2000LL, v4, v5);
    if ( *((_QWORD *)a2 + 3) == 0x8000000000000000LL )
    {
      v38 = rand::rngs::thread::thread_rng(&v41);
      v36 = 1;
      v7 = 1;
      if ( *((_BYTE *)a2 + 56) )
      {
LABEL_10:
        if ( !*(_QWORD *)(a1 + 16) )
        {
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v34, 18LL, 0LL);
          v29 = *((_QWORD *)&v34 + 1);
          if ( (_QWORD)v34 )
            alloc::raw_vec::handle_error(*((_QWORD *)&v34 + 1), v35);
          v30 = v35;
          *(_OWORD *)v35 = unk_124AA;
          *(_WORD *)(v30 + 16) = 29793;
          DWORD2(v35) = 1;
          *(_QWORD *)&v34 = v29;
          *((_QWORD *)&v34 + 1) = v30;
          *(_QWORD *)&v35 = 18LL;
          v31 = (_OWORD *)_rust_alloc(32LL, 8LL);
          if ( !v31 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v6 = (__int64)v31;
          v32 = v34;
          v31[1] = v35;
          *v31 = v32;
          if ( v36 )
          {
LABEL_37:
            <alloc::rc::Rc<T,A> as core::ops::drop::Drop>::drop(&v38);
            goto LABEL_42;
          }
LABEL_41:
          close(fd);
          goto LABEL_42;
        }
        v11 = *((_QWORD *)a2 + 6);
        if ( v11 )
        {
          while ( 1 )
          {
            v12 = (const void *)<alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::choose(a1, &v36);
            v14 = v43;
            if ( v41 - v43 <= v13 )
            {
              v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v41, v12, v13);
            }
            else
            {
              v15 = v13;
              memcpy((void *)(v43 + v42), v12, v13);
              v43 = v15 + v14;
              v16 = 0LL;
            }
            v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v16);
            if ( v6 )
              break;
            v17 = *((_BYTE *)a2 + 57);
            LOBYTE(v34) = v17;
            v18 = v43;
            if ( (unsigned __int64)(v41 - v43) <= 1 )
            {
              v19 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v41, &v34, 1LL);
            }
            else
            {
              *(_BYTE *)(v42 + v43) = v17;
              v43 = v18 + 1;
              v19 = 0LL;
            }
            v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v19);
            if ( v6 )
              break;
            if ( !--v11 )
              goto LABEL_21;
          }
LABEL_36:
          if ( v36 )
            goto LABEL_37;
          goto LABEL_41;
        }
LABEL_21:
        if ( v36 )
          <alloc::rc::Rc<T,A> as core::ops::drop::Drop>::drop(&v38);
        else
          close(fd);
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v41);
        return 0LL;
      }
    }
    else
    {
      *(_QWORD *)&v35 = *((_QWORD *)a2 + 5);
      v34 = *(__int128 *)((char *)a2 + 24);
      std::fs::File::open(v44, *((_QWORD *)&v34 + 1));
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        &v39,
        v44,
        &v34);
      v6 = v39;
      if ( v39 )
      {
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v34);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34);
        v7 = 0;
LABEL_42:
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v41);
        goto LABEL_43;
      }
      fd = v40;
      v36 = 0;
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v34);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34);
      v7 = 0;
      if ( *((_BYTE *)a2 + 56) )
        goto LABEL_10;
    }
    *(_QWORD *)&v20 = <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::partial_shuffle(a1, &v36, *((_QWORD *)a2 + 6));
    v34 = v20;
    while ( 1 )
    {
      v21 = (const void *)<core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v34);
      if ( !v21 )
        goto LABEL_21;
      v23 = v43;
      if ( v41 - v43 <= v22 )
      {
        v25 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v41, v21, v22);
      }
      else
      {
        v24 = v22;
        memcpy((void *)(v43 + v42), v21, v22);
        v43 = v24 + v23;
        v25 = 0LL;
      }
      v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v25);
      if ( !v6 )
      {
        v26 = *((_BYTE *)a2 + 57);
        v44[0] = v26;
        v27 = v43;
        if ( (unsigned __int64)(v41 - v43) <= 1 )
        {
          v28 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v41, v44, 1LL);
        }
        else
        {
          *(_BYTE *)(v42 + v43) = v26;
          v43 = v27 + 1;
          v28 = 0LL;
        }
        v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v28);
        if ( !v6 )
          continue;
      }
      goto LABEL_36;
    }
  }
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v34);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34);
  v7 = 1;
LABEL_43:
  if ( v7 && *((_QWORD *)a2 + 3) != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop((char *)a2 + 24);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)a2 + 24);
  }
  return v6;
}
