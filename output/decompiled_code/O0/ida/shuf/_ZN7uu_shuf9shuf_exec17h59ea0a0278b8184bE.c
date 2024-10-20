__int64 __fastcall uu_shuf::shuf_exec(__int64 a1, __int128 *a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rdx
  const char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  struct _Unwind_Exception *v39; // rdx
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  struct _Unwind_Exception *v44; // [rsp+0h] [rbp-3D8h]
  int v45; // [rsp+8h] [rbp-3D0h]
  int v46; // [rsp+10h] [rbp-3C8h]
  int v47; // [rsp+18h] [rbp-3C0h]
  int v48; // [rsp+20h] [rbp-3B8h]
  int v49; // [rsp+28h] [rbp-3B0h]
  int v50; // [rsp+30h] [rbp-3A8h]
  int v51; // [rsp+38h] [rbp-3A0h]
  int v52; // [rsp+40h] [rbp-398h]
  __int64 v53; // [rsp+40h] [rbp-398h]
  int v54; // [rsp+48h] [rbp-390h]
  struct _Unwind_Exception *v55; // [rsp+50h] [rbp-388h]
  int v56; // [rsp+58h] [rbp-380h]
  __int64 v57; // [rsp+68h] [rbp-370h]
  __int64 v58; // [rsp+F0h] [rbp-2E8h]
  __int64 v59; // [rsp+118h] [rbp-2C0h]
  char is_empty; // [rsp+147h] [rbp-291h]
  _DWORD *v61; // [rsp+1A8h] [rbp-230h]
  __int64 *v62; // [rsp+1B0h] [rbp-228h]
  __int64 v63; // [rsp+1D8h] [rbp-200h]
  __int128 *v64; // [rsp+1E8h] [rbp-1F0h]
  __int64 v65; // [rsp+1F0h] [rbp-1E8h]
  int v66[12]; // [rsp+200h] [rbp-1D8h] BYREF
  int v67[2]; // [rsp+230h] [rbp-1A8h]
  int v68[2]; // [rsp+238h] [rbp-1A0h]
  __int128 v69; // [rsp+240h] [rbp-198h] BYREF
  __int64 v70; // [rsp+250h] [rbp-188h]
  int v71; // [rsp+25Ch] [rbp-17Ch]
  __int64 v72; // [rsp+260h] [rbp-178h] BYREF
  __int64 v73; // [rsp+268h] [rbp-170h]
  _BYTE v74[16]; // [rsp+270h] [rbp-168h] BYREF
  int v75[4]; // [rsp+280h] [rbp-158h] BYREF
  _DWORD v76[2]; // [rsp+290h] [rbp-148h] BYREF
  __int64 v77; // [rsp+298h] [rbp-140h]
  __int128 v78; // [rsp+2A0h] [rbp-138h] BYREF
  __int64 v79; // [rsp+2B0h] [rbp-128h]
  int v80; // [rsp+2BCh] [rbp-11Ch]
  __int64 v81; // [rsp+2C0h] [rbp-118h] BYREF
  __int64 v82; // [rsp+2C8h] [rbp-110h]
  _BYTE v83[16]; // [rsp+2D0h] [rbp-108h] BYREF
  _BYTE v84[16]; // [rsp+2E0h] [rbp-F8h] BYREF
  _QWORD v85[2]; // [rsp+2F0h] [rbp-E8h] BYREF
  __int64 v86; // [rsp+300h] [rbp-D8h]
  __int64 v87; // [rsp+308h] [rbp-D0h]
  _QWORD v88[2]; // [rsp+310h] [rbp-C8h] BYREF
  __int64 v89; // [rsp+320h] [rbp-B8h]
  __int64 v90; // [rsp+328h] [rbp-B0h]
  __int64 v91; // [rsp+330h] [rbp-A8h]
  __int64 v92; // [rsp+338h] [rbp-A0h]
  char v93; // [rsp+347h] [rbp-91h] BYREF
  _QWORD v94[2]; // [rsp+348h] [rbp-90h] BYREF
  __int64 v95; // [rsp+358h] [rbp-80h]
  __int64 v96; // [rsp+360h] [rbp-78h]
  _QWORD v97[2]; // [rsp+368h] [rbp-70h] BYREF
  __int64 v98; // [rsp+378h] [rbp-60h]
  __int64 v99; // [rsp+380h] [rbp-58h]
  __int64 v100; // [rsp+388h] [rbp-50h]
  __int64 v101; // [rsp+390h] [rbp-48h]
  char v102; // [rsp+39Ch] [rbp-3Ch] BYREF
  char v103; // [rsp+39Dh] [rbp-3Bh]
  char v104; // [rsp+39Eh] [rbp-3Ah]
  char v105; // [rsp+39Fh] [rbp-39h]
  int v106; // [rsp+3B4h] [rbp-24h]

  v64 = a2;
  v105 = 0;
  v104 = 0;
  v103 = 1;
  if ( *(_QWORD *)a2 == 0x8000000000000000LL )
  {
    v63 = std::io::stdio::stdout();
    v62 = (__int64 *)alloc::alloc::exchange_malloc(8LL, 8LL);
    *v62 = v63;
    *(_QWORD *)v67 = v62;
    *(_QWORD *)v68 = &unk_11F778;
LABEL_4:
    std::io::buffered::bufwriter::BufWriter<W>::new((int)v66, v67[0], v68[0]);
    if ( *((_QWORD *)a2 + 3) == 0x8000000000000000LL )
    {
      v77 = rand::rngs::thread::thread_rng();
      v76[0] = 1;
    }
    else
    {
      v103 = 0;
      v79 = *((_QWORD *)a2 + 5);
      v78 = *(__int128 *)((char *)a2 + 24);
      v7 = <alloc::string::String as core::ops::index::Index<I>>::index(&v78, &off_11F830);
      std::fs::File::open(v84, v7, v8);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        v83,
        v84,
        &v78);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v81, v83);
      if ( v81 )
      {
        LODWORD(v9) = v82;
        v65 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v81,
                v82,
                &off_11F8A8);
        v104 = 0;
        core::ptr::drop_in_place<alloc::string::String>(&v78);
LABEL_37:
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(
          (int)v66,
          (int)v9,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        goto LABEL_38;
      }
      v80 = v82;
      v104 = 0;
      v76[1] = uu_shuf::rand_read_adapter::ReadRng<R>::new((unsigned int)v82);
      v76[0] = 0;
      v104 = 0;
      core::ptr::drop_in_place<alloc::string::String>(&v78);
    }
    if ( (*((_BYTE *)a2 + 56) & 1) == 0 )
    {
      v10 = <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::partial_shuffle(a1, v76, *((_QWORD *)a2 + 6));
      LODWORD(a2) = v11;
      v94[0] = <I as core::iter::traits::collect::IntoIterator>::into_iter(v10, v11);
      v94[1] = v12;
      while ( 1 )
      {
        v95 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(v94);
        v96 = v13;
        if ( !v95 )
          break;
        v97[0] = v95;
        v97[1] = v96;
        v59 = <&[u8] as uu_shuf::Writable>::write_all_to(v97, v66);
        v14 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v59);
        v16 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v14, v15);
        v98 = v16;
        v99 = v17;
        if ( v16 )
        {
          LODWORD(v9) = v99;
          v65 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v98,
                  v99,
                  &off_11F860);
          goto LABEL_25;
        }
        v102 = *((_BYTE *)v64 + 57);
        v58 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v66, &v102, 1LL);
        v18 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v58);
        LODWORD(a2) = v19;
        v20 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v18, v19);
        v100 = v20;
        v101 = v21;
        if ( v20 )
        {
          LODWORD(v9) = v101;
          v65 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v100,
                  v101,
                  &off_11F848);
          goto LABEL_25;
        }
      }
LABEL_19:
      v65 = 0LL;
      core::ptr::drop_in_place<uu_shuf::WrappedRng>(v76);
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(
        (int)v66,
        (int)a2,
        v24,
        v25,
        v26,
        v27,
        v44,
        v45);
      return v65;
    }
    is_empty = <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::is_empty(a1);
    if ( (is_empty & 1) == 0 )
    {
      a2 = (__int128 *)*((_QWORD *)a2 + 6);
      v85[0] = <I as core::iter::traits::collect::IntoIterator>::into_iter(0LL, a2);
      v85[1] = v22;
      while ( 1 )
      {
        v86 = core::iter::range::<impl core::iter::traits::iterator::Iterator for core::ops::range::Range<A>>::next(v85);
        v87 = v23;
        if ( !v86 )
          goto LABEL_19;
        v88[0] = <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::choose(a1, v76);
        v88[1] = v29;
        v57 = <&[u8] as uu_shuf::Writable>::write_all_to(v88, v66);
        v30 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v57);
        v32 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v30, v31);
        v89 = v32;
        v90 = v33;
        if ( v32 )
        {
          LODWORD(v9) = v90;
          v65 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v89,
                  v90,
                  &off_11F890);
          goto LABEL_25;
        }
        v93 = *((_BYTE *)v64 + 57);
        v53 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v66, &v93, 1LL);
        v34 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v53);
        LODWORD(a2) = v35;
        v36 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v34, v35);
        v91 = v36;
        v92 = v37;
        if ( v36 )
        {
          LODWORD(v9) = v92;
          v38 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v91,
                  v92,
                  &off_11F878);
          v44 = v39;
          v45 = v38;
          v65 = v38;
          goto LABEL_25;
        }
      }
    }
    v9 = aNoLinesToRepea;
    v65 = uucore::mods::error::USimpleError::new(1LL, aNoLinesToRepea, 18LL);
LABEL_25:
    core::ptr::drop_in_place<uu_shuf::WrappedRng>(v76);
    goto LABEL_37;
  }
  v70 = *((_QWORD *)a2 + 2);
  v69 = *a2;
  v2 = <alloc::string::String as core::ops::index::Index<I>>::index(&v69, &off_11F7C8);
  std::fs::File::create((int)v75, v2, v3, v4, v5, v6, (int)v44, v45, v46, v47, v48, v49, v50, v51, v52, v54, v55, v56);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    v74,
    v75,
    &v69);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v72, v74);
  if ( !v72 )
  {
    v71 = v73;
    v105 = 0;
    v106 = v73;
    v61 = (_DWORD *)alloc::alloc::exchange_malloc(4LL, 4LL);
    *v61 = v106;
    v105 = 0;
    *(_QWORD *)v67 = v61;
    *(_QWORD *)v68 = &off_11F7E0;
    core::ptr::drop_in_place<alloc::string::String>(&v69);
    goto LABEL_4;
  }
  v65 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
          v72,
          v73,
          &off_11F8C0);
  v105 = 0;
  core::ptr::drop_in_place<alloc::string::String>(&v69);
LABEL_38:
  if ( *((_QWORD *)v64 + 3) != 0x8000000000000000LL && (v103 & 1) != 0 )
    core::ptr::drop_in_place<alloc::string::String>((char *)v64 + 24);
  return v65;
}
