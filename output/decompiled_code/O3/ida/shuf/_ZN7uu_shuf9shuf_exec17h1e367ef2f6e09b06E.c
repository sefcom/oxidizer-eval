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
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // rax
  char v20; // [rsp+4h] [rbp-154h]
  __int64 v21; // [rsp+8h] [rbp-150h] BYREF
  __int64 v22; // [rsp+10h] [rbp-148h]
  _DWORD v23[2]; // [rsp+18h] [rbp-140h] BYREF
  __int64 v24; // [rsp+20h] [rbp-138h]
  __int128 v25; // [rsp+28h] [rbp-130h] BYREF
  __int64 v26; // [rsp+38h] [rbp-120h]
  __int128 v27; // [rsp+40h] [rbp-118h] BYREF
  __int128 v28; // [rsp+50h] [rbp-108h]
  __int128 v29; // [rsp+60h] [rbp-F8h]
  __int128 v30; // [rsp+70h] [rbp-E8h]
  __int128 v31; // [rsp+80h] [rbp-D8h]
  __int64 v32; // [rsp+90h] [rbp-C8h]
  __int64 v33; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-B0h]
  __int64 v35; // [rsp+B0h] [rbp-A8h]
  _OWORD v36[5]; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v37; // [rsp+120h] [rbp-38h]

  if ( *(_QWORD *)a2 == 0x8000000000000000LL )
  {
    v2 = std::io::stdio::stdout();
    v3 = alloc::boxed::Box<T>::new(v2);
    v4 = (__int64 (__fastcall **)())&unk_134F98;
    goto LABEL_6;
  }
  *(_QWORD *)&v28 = *((_QWORD *)a2 + 2);
  v27 = *a2;
  std::fs::File::create(&v25, *((_QWORD *)&v27 + 1));
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v21,
    &v25,
    &v27);
  v5 = v21;
  if ( !v21 )
  {
    v7 = alloc::boxed::Box<T>::new((unsigned int)v22);
    core::ptr::drop_in_place<alloc::string::String>(&v27);
    v3 = v7;
    v4 = &off_134FE8;
LABEL_6:
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v33, 0x2000LL, v3, v4);
    if ( *((_QWORD *)a2 + 3) == 0x8000000000000000LL )
    {
      v24 = rand::rngs::thread::thread_rng();
      v23[0] = 1;
      v6 = 1;
      if ( *((_BYTE *)a2 + 56) )
      {
LABEL_8:
        if ( (unsigned __int8)<core::ops::range::RangeInclusive<usize> as uu_shuf::Shufable>::is_empty(a1) )
        {
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v25, aNoLinesToRepea, 18LL);
          *(_QWORD *)&v28 = v26;
          v27 = v25;
          DWORD2(v28) = 1;
          v5 = alloc::boxed::Box<T>::new(&v27);
LABEL_31:
          core::ptr::drop_in_place<uu_shuf::WrappedRng>(v23);
          goto LABEL_32;
        }
        v20 = v6;
        v8 = *((_QWORD *)a2 + 6);
        if ( v8 )
        {
          v9 = 0LL;
          while ( 1 )
          {
            v9 = <usize as core::iter::range::Step>::forward_unchecked(v9);
            *(_QWORD *)&v27 = <core::ops::range::RangeInclusive<usize> as uu_shuf::Shufable>::choose(a1, v23);
            v10 = <usize as uu_shuf::Writable>::write_all_to(&v27, &v33);
            v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v10);
            if ( v5 )
              break;
            v11 = *((_BYTE *)a2 + 57);
            LOBYTE(v25) = v11;
            v12 = v35;
            if ( (unsigned __int64)(v33 - v35) <= 1 )
            {
              v13 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v33, &v25, 1LL);
            }
            else
            {
              *(_BYTE *)(v34 + v35) = v11;
              v35 = v12 + 1;
              v13 = 0LL;
            }
            v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v13);
            if ( v5 )
              break;
            if ( v9 >= v8 )
              goto LABEL_37;
          }
          v6 = v20;
          goto LABEL_31;
        }
LABEL_37:
        core::ptr::drop_in_place<uu_shuf::WrappedRng>(v23);
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v33);
        return 0LL;
      }
    }
    else
    {
      *(_QWORD *)&v28 = *((_QWORD *)a2 + 5);
      v27 = *(__int128 *)((char *)a2 + 24);
      std::fs::File::open(&v25, *((_QWORD *)&v27 + 1));
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        &v21,
        &v25,
        &v27);
      v5 = v21;
      if ( v21 )
      {
        core::ptr::drop_in_place<alloc::string::String>(&v27);
        v6 = 0;
LABEL_32:
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v33);
        goto LABEL_33;
      }
      v23[1] = v22;
      v23[0] = 0;
      core::ptr::drop_in_place<alloc::string::String>(&v27);
      v6 = 0;
      if ( *((_BYTE *)a2 + 56) )
        goto LABEL_8;
    }
    <core::ops::range::RangeInclusive<usize> as uu_shuf::Shufable>::partial_shuffle(v36, a1, v23, *((_QWORD *)a2 + 6));
    v32 = v37;
    v31 = v36[4];
    v30 = v36[3];
    v29 = v36[2];
    v28 = v36[1];
    v27 = v36[0];
    while ( <uu_shuf::NonrepeatingIterator as core::iter::traits::iterator::Iterator>::next(&v27) )
    {
      *(_QWORD *)&v25 = v14;
      v15 = <usize as uu_shuf::Writable>::write_all_to(&v25, &v33);
      v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v15);
      if ( !v5 )
      {
        v16 = *((_BYTE *)a2 + 57);
        LOBYTE(v21) = v16;
        v17 = v35;
        if ( (unsigned __int64)(v33 - v35) <= 1 )
        {
          v18 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v33, &v21, 1LL);
        }
        else
        {
          *(_BYTE *)(v34 + v35) = v16;
          v35 = v17 + 1;
          v18 = 0LL;
        }
        v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v18);
        if ( !v5 )
          continue;
      }
      core::ptr::drop_in_place<uu_shuf::NonrepeatingIterator>(&v27);
      goto LABEL_31;
    }
    core::ptr::drop_in_place<uu_shuf::NonrepeatingIterator>(&v27);
    goto LABEL_37;
  }
  core::ptr::drop_in_place<alloc::string::String>(&v27);
  v6 = 1;
LABEL_33:
  if ( v6 && *((_QWORD *)a2 + 3) != 0x8000000000000000LL )
    core::ptr::drop_in_place<alloc::string::String>((char *)a2 + 24);
  return v5;
}
