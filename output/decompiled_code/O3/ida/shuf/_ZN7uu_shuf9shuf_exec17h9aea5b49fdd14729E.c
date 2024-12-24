__int64 __fastcall uu_shuf::shuf_exec(__int64 a1, __int128 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 (__fastcall **v4)(); // rcx
  __int64 v5; // r15
  char v6; // bp
  __int64 v7; // r15
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rax
  __int128 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // rcx
  __int64 v22; // rax
  char v24; // [rsp+Ch] [rbp-BCh]
  __int128 v25; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+20h] [rbp-A8h]
  int v27; // [rsp+28h] [rbp-A0h]
  _DWORD v28[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v29; // [rsp+38h] [rbp-90h]
  __int64 v30; // [rsp+40h] [rbp-88h] BYREF
  __int64 v31; // [rsp+48h] [rbp-80h]
  __int128 v32; // [rsp+50h] [rbp-78h] BYREF
  __int64 v33; // [rsp+60h] [rbp-68h]
  __int64 v34; // [rsp+68h] [rbp-60h] BYREF
  __int64 v35; // [rsp+70h] [rbp-58h]
  __int64 v36; // [rsp+78h] [rbp-50h]

  if ( *(_QWORD *)a2 == 0x8000000000000000LL )
  {
    v2 = std::io::stdio::stdout();
    v3 = alloc::boxed::Box<T>::new(v2);
    v4 = (__int64 (__fastcall **)())&unk_134F98;
    goto LABEL_6;
  }
  v26 = *((_QWORD *)a2 + 2);
  v25 = *a2;
  std::fs::File::create(&v32, *((_QWORD *)&v25 + 1));
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v30,
    &v32,
    &v25);
  v5 = v30;
  if ( !v30 )
  {
    v7 = alloc::boxed::Box<T>::new((unsigned int)v31);
    core::ptr::drop_in_place<alloc::string::String>(&v25);
    v3 = v7;
    v4 = &off_134FE8;
LABEL_6:
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v34, 0x2000LL, v3, v4);
    if ( *((_QWORD *)a2 + 3) == 0x8000000000000000LL )
    {
      v29 = rand::rngs::thread::thread_rng();
      v28[0] = 1;
      v6 = 1;
      if ( *((_BYTE *)a2 + 56) )
      {
LABEL_8:
        if ( (unsigned __int8)<alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::is_empty(*(_QWORD *)(a1 + 16)) )
        {
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v32, aNoLinesToRepea, 18LL);
          v26 = v33;
          v25 = v32;
          v27 = 1;
          v5 = alloc::boxed::Box<T>::new(&v25);
LABEL_30:
          core::ptr::drop_in_place<uu_shuf::WrappedRng>(v28);
          goto LABEL_31;
        }
        v24 = v6;
        v8 = *((_QWORD *)a2 + 6);
        if ( v8 )
        {
          v9 = 0LL;
          while ( 1 )
          {
            v9 = <usize as core::iter::range::Step>::forward_unchecked(v9);
            v10 = <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::choose(a1, v28);
            v12 = <&[u8] as uu_shuf::Writable>::write_all_to(v10, v11, &v34);
            v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v12);
            if ( v5 )
              break;
            v13 = *((_BYTE *)a2 + 57);
            LOBYTE(v25) = v13;
            v14 = v36;
            if ( (unsigned __int64)(v34 - v36) <= 1 )
            {
              v15 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v34, &v25, 1LL);
            }
            else
            {
              *(_BYTE *)(v35 + v36) = v13;
              v36 = v14 + 1;
              v15 = 0LL;
            }
            v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v15);
            if ( v5 )
              break;
            if ( v9 >= v8 )
              goto LABEL_20;
          }
LABEL_29:
          v6 = v24;
          goto LABEL_30;
        }
LABEL_20:
        core::ptr::drop_in_place<uu_shuf::WrappedRng>(v28);
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v34);
        return 0LL;
      }
    }
    else
    {
      v26 = *((_QWORD *)a2 + 5);
      v25 = *(__int128 *)((char *)a2 + 24);
      std::fs::File::open(&v32, *((_QWORD *)&v25 + 1));
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        &v30,
        &v32,
        &v25);
      v5 = v30;
      if ( v30 )
      {
        core::ptr::drop_in_place<alloc::string::String>(&v25);
        v6 = 0;
LABEL_31:
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v34);
        goto LABEL_32;
      }
      v28[1] = v31;
      v28[0] = 0;
      core::ptr::drop_in_place<alloc::string::String>(&v25);
      v6 = 0;
      if ( *((_BYTE *)a2 + 56) )
        goto LABEL_8;
    }
    *(_QWORD *)&v16 = <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::partial_shuffle(a1, v28, *((_QWORD *)a2 + 6));
    v24 = v6;
    v25 = v16;
    while ( 1 )
    {
      v17 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v25);
      if ( !v17 )
        goto LABEL_20;
      v19 = <&[u8] as uu_shuf::Writable>::write_all_to(v17, v18, &v34);
      v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v19);
      if ( !v5 )
      {
        v20 = *((_BYTE *)a2 + 57);
        LOBYTE(v32) = v20;
        v21 = v36;
        if ( (unsigned __int64)(v34 - v36) <= 1 )
        {
          v22 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v34, &v32, 1LL);
        }
        else
        {
          *(_BYTE *)(v35 + v36) = v20;
          v36 = v21 + 1;
          v22 = 0LL;
        }
        v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v22);
        if ( !v5 )
          continue;
      }
      goto LABEL_29;
    }
  }
  core::ptr::drop_in_place<alloc::string::String>(&v25);
  v6 = 1;
LABEL_32:
  if ( v6 && *((_QWORD *)a2 + 3) != 0x8000000000000000LL )
    core::ptr::drop_in_place<alloc::string::String>((char *)a2 + 24);
  return v5;
}
