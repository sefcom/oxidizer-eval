__int64 __fastcall uu_split::line_bytes(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  unsigned __int64 v9; // r14
  unsigned int v10; // ebx
  unsigned __int64 v11; // rbx
  __int128 *v12; // rbp
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // r13
  __int64 v22; // r15
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  char v34; // [rsp+6h] [rbp-1B2h]
  unsigned __int8 v35; // [rsp+7h] [rbp-1B1h]
  __int64 v36; // [rsp+8h] [rbp-1B0h]
  __int128 v37; // [rsp+10h] [rbp-1A8h] BYREF
  __int128 v38; // [rsp+20h] [rbp-198h]
  __int128 *v39; // [rsp+38h] [rbp-180h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+40h] [rbp-178h]
  __int64 v41; // [rsp+48h] [rbp-170h]
  __int128 v42; // [rsp+50h] [rbp-168h] BYREF
  _BYTE v43[40]; // [rsp+60h] [rbp-158h]
  __int128 v44; // [rsp+88h] [rbp-130h]
  __int64 *v45; // [rsp+98h] [rbp-120h]
  __int64 v46; // [rsp+A0h] [rbp-118h]
  unsigned __int64 v47; // [rsp+A8h] [rbp-110h]
  __int64 v48; // [rsp+B0h] [rbp-108h]
  unsigned int i; // [rsp+BCh] [rbp-FCh]
  __int64 v50; // [rsp+C0h] [rbp-F8h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-F0h]
  __int128 v52; // [rsp+D0h] [rbp-E8h]
  __int128 v53; // [rsp+E0h] [rbp-D8h]
  __int128 v54; // [rsp+F0h] [rbp-C8h]
  __int128 v55; // [rsp+100h] [rbp-B8h]
  __int64 v56; // [rsp+110h] [rbp-A8h]
  unsigned __int64 v57; // [rsp+118h] [rbp-A0h]
  __int64 v58; // [rsp+120h] [rbp-98h]
  __int128 v59; // [rsp+128h] [rbp-90h] BYREF
  __int64 v60; // [rsp+138h] [rbp-80h]
  __int128 v61; // [rsp+140h] [rbp-78h]
  __int128 v62; // [rsp+150h] [rbp-68h]
  __int128 v63; // [rsp+160h] [rbp-58h]
  __int64 v64; // [rsp+170h] [rbp-48h] BYREF
  __int64 v65; // [rsp+178h] [rbp-40h]
  unsigned __int64 v66; // [rsp+180h] [rbp-38h]

  v58 = a2;
  v4 = a1[6];
  v5 = a1[7];
  v45 = a1;
  uu_split::filenames::FilenameIterator::new((__int64)&v42, v4, v5, (__int64)(a1 + 8));
  v6 = *((_QWORD *)&v42 + 1);
  v57 = 0x8000000000000001LL;
  if ( (_QWORD)v42 != 0x8000000000000001LL )
  {
    v63 = v44;
    v62 = *(_OWORD *)&v43[24];
    v61 = *(_OWORD *)&v43[8];
    v59 = v42;
    v60 = *(_QWORD *)v43;
    *(_QWORD *)&v42 = 0LL;
    *((_QWORD *)&v42 + 1) = 1LL;
    *(_OWORD *)v43 = 0LL;
    v7 = alloc::boxed::Box<T>::new(&v42);
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v50, v7, &off_10B0C0);
    v8 = *((_BYTE *)v45 + 162);
    v34 = *((_BYTE *)v45 + 160);
    v48 = v45[17];
    v56 = -(__int64)a3;
    v9 = 0LL;
    v35 = v8;
    v10 = v8;
    v47 = a3;
    for ( i = v8; ; v10 = i )
    {
      <uu_split::LinesWithSep<R> as core::iter::traits::iterator::Iterator>::next(&v64, v58, v10);
      if ( v64 == v57 )
      {
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v50);
        core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(v59, *((_QWORD *)&v59 + 1));
        return 0LL;
      }
      v36 = v65;
      if ( v64 == 0x8000000000000000LL )
      {
        v6 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v65);
        goto LABEL_38;
      }
      v46 = v64;
      v11 = v66;
      if ( !v9 )
        break;
      if ( v66 != v9 || v9 >= a3 || (v9 = v66, *(_BYTE *)(v65 + v66 - 1) == v35) )
      {
        if ( v66 <= v9 )
          goto LABEL_29;
LABEL_9:
        if ( v9 == a3 )
          goto LABEL_15;
      }
      <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(&v39, &v59);
      v12 = v39;
      if ( v39 == (__int128 *)0x8000000000000000LL )
        goto LABEL_34;
      v13 = (__int64)v40;
      v14 = v41;
      if ( (v34 & 1) != 0 )
      {
        *(_QWORD *)&v37 = 0LL;
        *((_QWORD *)&v37 + 1) = v40;
        *(_QWORD *)&v38 = v41;
        BYTE8(v38) = 1;
        v39 = &v37;
        v40 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v42 = &off_10AF08;
        *((_QWORD *)&v42 + 1) = 2LL;
        *(_QWORD *)&v43[16] = 0LL;
        *(_QWORD *)v43 = &v39;
        *(_QWORD *)&v43[8] = 1LL;
        std::io::stdio::_print(&v42);
      }
      uu_split::Settings::instantiate_current_writer(&v42, v45, v13, v14, 1);
      v15 = v42;
      if ( (_QWORD)v42 == 0x8000000000000000LL )
        goto LABEL_35;
      v16 = *((_QWORD *)&v42 + 1);
      v37 = *(_OWORD *)v43;
      v38 = *(_OWORD *)&v43[16];
      v55 = *(_OWORD *)&v43[16];
      v54 = *(_OWORD *)v43;
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v50);
      v50 = v15;
      v51 = v16;
      v53 = v38;
      v52 = v37;
      core::ptr::drop_in_place<alloc::string::String>(v12, v13);
      a3 = v47;
      if ( v11 > v47 )
      {
LABEL_15:
        v17 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                0LL,
                a3,
                v36,
                v11,
                &off_10B110);
        uu_split::custom_write_all((__int64)&v42, v17, v18, (__int64)&v50, v48);
        if ( (_BYTE)v42 )
        {
LABEL_36:
          v6 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v42 + 1));
        }
        else
        {
          v11 += v56;
          v19 = v36 + a3;
          while ( 1 )
          {
            <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(&v39, &v59);
            v12 = v39;
            if ( v39 == (__int128 *)0x8000000000000000LL )
              break;
            v13 = (__int64)v40;
            v20 = v41;
            if ( (v34 & 1) != 0 )
            {
              *(_QWORD *)&v37 = 0LL;
              *((_QWORD *)&v37 + 1) = v40;
              *(_QWORD *)&v38 = v41;
              BYTE8(v38) = 1;
              v39 = &v37;
              v40 = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)&v42 = &off_10AF08;
              *((_QWORD *)&v42 + 1) = 2LL;
              *(_QWORD *)&v43[16] = 0LL;
              *(_QWORD *)v43 = &v39;
              *(_QWORD *)&v43[8] = 1LL;
              std::io::stdio::_print(&v42);
            }
            uu_split::Settings::instantiate_current_writer(&v42, v45, v13, v20, 1);
            v21 = v42;
            if ( (_QWORD)v42 == 0x8000000000000000LL )
              goto LABEL_35;
            v22 = *((_QWORD *)&v42 + 1);
            v37 = *(_OWORD *)v43;
            v38 = *(_OWORD *)&v43[16];
            v55 = *(_OWORD *)&v43[16];
            v54 = *(_OWORD *)v43;
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v50);
            v50 = v21;
            v51 = v22;
            v53 = v38;
            v52 = v37;
            core::ptr::drop_in_place<alloc::string::String>(v12, v13);
            a3 = v47;
            v23 = v11 - v47;
            if ( v11 <= v47 )
              goto LABEL_31;
            v24 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                    0LL,
                    v47,
                    v19,
                    v11,
                    &off_10B110);
            uu_split::custom_write_all((__int64)&v42, v24, v25, (__int64)&v50, v48);
            v19 += a3;
            v11 = v23;
            if ( (_BYTE)v42 == 1 )
              goto LABEL_36;
          }
LABEL_34:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v37, aOutputFileSuff, 30LL);
          *(_QWORD *)v43 = v38;
          v42 = v37;
          *(_DWORD *)&v43[8] = 1;
          v6 = alloc::boxed::Box<T>::new(&v42);
        }
LABEL_37:
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v46, v36, v31, v32);
LABEL_38:
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v50);
        core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(v59, *((_QWORD *)&v59 + 1));
        return v6;
      }
      v19 = v36;
LABEL_31:
      v9 = a3;
LABEL_32:
      uu_split::custom_write_all((__int64)&v42, v19, v11, (__int64)&v50, v48);
      if ( (_BYTE)v42 == 1 )
        goto LABEL_36;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v46, v36, v29, v30);
      v9 -= v11;
    }
    <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(&v39, &v59);
    v12 = v39;
    if ( v39 == (__int128 *)0x8000000000000000LL )
      goto LABEL_34;
    v13 = (__int64)v40;
    v26 = v41;
    if ( (v34 & 1) != 0 )
    {
      *(_QWORD *)&v37 = 0LL;
      *((_QWORD *)&v37 + 1) = v40;
      *(_QWORD *)&v38 = v41;
      BYTE8(v38) = 1;
      v39 = &v37;
      v40 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v42 = &off_10AF08;
      *((_QWORD *)&v42 + 1) = 2LL;
      *(_QWORD *)&v43[16] = 0LL;
      *(_QWORD *)v43 = &v39;
      *(_QWORD *)&v43[8] = 1LL;
      std::io::stdio::_print(&v42);
    }
    uu_split::Settings::instantiate_current_writer(&v42, v45, v13, v26, 1);
    v27 = v42;
    if ( (_QWORD)v42 == 0x8000000000000000LL )
    {
LABEL_35:
      v6 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v42 + 1));
      core::ptr::drop_in_place<alloc::string::String>(v12, v13);
      goto LABEL_37;
    }
    v28 = *((_QWORD *)&v42 + 1);
    v37 = *(_OWORD *)v43;
    v38 = *(_OWORD *)&v43[16];
    v55 = *(_OWORD *)&v43[16];
    v54 = *(_OWORD *)v43;
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v50);
    v50 = v27;
    v51 = v28;
    v53 = v38;
    v52 = v37;
    core::ptr::drop_in_place<alloc::string::String>(v12, v13);
    a3 = v47;
    v9 = v47;
    if ( v11 <= v47 )
    {
LABEL_29:
      v19 = v36;
      goto LABEL_32;
    }
    goto LABEL_9;
  }
  return v6;
}