__int64 __fastcall uu_fmt::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned __int8 *v6; // rax
  int v7; // ecx
  unsigned __int8 *v8; // rax
  int v9; // esi
  int v10; // edx
  int v11; // edi
  int v12; // r8d
  int v13; // edx
  int v14; // esi
  int v15; // r8d
  int v16; // edi
  __int64 v17; // rbx
  __int64 (__fastcall **v18)(); // rdx
  __int64 (__fastcall **v19)(); // r14
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // rbp
  __int64 (__fastcall **v24)(); // rdx
  __int64 v25; // rsi
  __int128 v26; // rax
  __int128 v27; // rax
  unsigned int v28; // ebx
  __int128 v29; // kr00_16
  __int64 v30; // rsi
  __int64 v32; // rsi
  _OWORD *v33; // rax
  __int128 v34; // xmm0
  __int128 v35; // [rsp+0h] [rbp-3E8h] BYREF
  __int64 v36; // [rsp+10h] [rbp-3D8h]
  __int128 v37; // [rsp+18h] [rbp-3D0h] BYREF
  __int64 v38; // [rsp+28h] [rbp-3C0h]
  __int128 v39; // [rsp+30h] [rbp-3B8h] BYREF
  __int128 v40; // [rsp+40h] [rbp-3A8h]
  __int128 v41; // [rsp+50h] [rbp-398h]
  __int64 v42; // [rsp+60h] [rbp-388h]
  _BYTE v43[8]; // [rsp+68h] [rbp-380h] BYREF
  __int64 v44; // [rsp+70h] [rbp-378h]
  unsigned __int64 v45; // [rsp+78h] [rbp-370h]
  __int128 v46; // [rsp+80h] [rbp-368h] BYREF
  _BYTE v47[40]; // [rsp+90h] [rbp-358h]
  __int128 v48; // [rsp+B8h] [rbp-330h]
  __int64 v49; // [rsp+C8h] [rbp-320h]
  __int128 v50; // [rsp+D8h] [rbp-310h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-300h]
  __int128 v52; // [rsp+F0h] [rbp-2F8h] BYREF
  _BYTE v53[24]; // [rsp+100h] [rbp-2E8h]
  __int128 v54; // [rsp+118h] [rbp-2D0h]
  __int128 v55; // [rsp+128h] [rbp-2C0h]
  __int64 v56; // [rsp+138h] [rbp-2B0h]

  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v43, a1, a2);
  if ( v45 >= 2 )
  {
    std::sys::os_str::bytes::Slice::to_string_lossy(&v39, *(_QWORD *)(v44 + 32), *(_QWORD *)(v44 + 40));
    v2 = v40;
    LODWORD(v52) = 45;
    if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(*((void **)&v39 + 1)) )
    {
      v3 = v40;
      if ( (_QWORD)v40 )
      {
        v4 = *((_QWORD *)&v39 + 1);
        v5 = byte_10FFF[(unsigned __int8)**((_BYTE **)&v39 + 1)];
        if ( (_QWORD)v40 != v5 )
        {
          v6 = (unsigned __int8 *)(*((_QWORD *)&v39 + 1) + v5);
          v7 = *v6;
          if ( (v7 & 0x80u) != 0 )
          {
            v9 = v7 & 0x1F;
            v10 = v6[1] & 0x3F;
            if ( (unsigned __int8)v7 < 0xE0u )
            {
              v2 = (unsigned int)(v9 << 6);
              if ( (unsigned int)(v2 + v10 - 48) <= 9 )
              {
                v8 = v6 + 2;
                goto LABEL_19;
              }
            }
            else
            {
              v11 = v6[2] & 0x3F;
              v12 = v11 | (v10 << 6);
              if ( (unsigned __int8)v7 < 0xF0u )
              {
                v2 = (unsigned int)(v9 << 12);
                if ( (unsigned int)(v12 + v2 - 48) <= 9 )
                {
                  v8 = v6 + 3;
LABEL_19:
                  while ( v8 != (unsigned __int8 *)(*((_QWORD *)&v39 + 1) + v40) )
                  {
                    v13 = *v8;
                    if ( (v13 & 0x80u) == 0 )
                    {
                      ++v8;
                    }
                    else
                    {
                      v14 = v13 & 0x1F;
                      v15 = v8[1] & 0x3F;
                      if ( (unsigned __int8)v13 <= 0xDFu )
                      {
                        v8 += 2;
                        v2 = v15 | (unsigned int)(v14 << 6);
                        v13 = v2;
                      }
                      else
                      {
                        v16 = (v15 << 6) | v8[2] & 0x3F;
                        if ( (unsigned __int8)v13 < 0xF0u )
                        {
                          v8 += 3;
                          v2 = (unsigned int)(v14 << 12);
                          v13 = v2 | v16;
                        }
                        else
                        {
                          v2 = (unsigned __int8)(v13 & 7) << 18;
                          v13 = v2 | (v16 << 6) | v8[3] & 0x3F;
                          if ( v13 == 1114112 )
                            break;
                          v8 += 4;
                        }
                      }
                    }
                    if ( (unsigned int)(v13 - 48) >= 0xA )
                    {
                      LODWORD(v52) = 45;
                      v32 = v40;
                      if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(*((void **)&v39 + 1)) )
                        core::option::unwrap_failed(&off_E98C8, v32);
                      *(_QWORD *)&v46 = 0LL;
                      *((_QWORD *)&v46 + 1) = v4 + 1;
                      *(_QWORD *)v47 = v3 - 1;
                      v47[8] = 1;
                      *(_QWORD *)&v35 = &v46;
                      *((_QWORD *)&v35 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
                      *(_QWORD *)&v52 = &off_E98E0;
                      *((_QWORD *)&v52 + 1) = 1LL;
                      *(_QWORD *)&v53[16] = 0LL;
                      *(_QWORD *)v53 = &v35;
                      *(_QWORD *)&v53[8] = 1LL;
                      alloc::fmt::format::format_inner(&v37, &v52);
                      *(_DWORD *)&v53[8] = 1;
                      v52 = v37;
                      *(_QWORD *)v53 = v38;
                      v33 = (_OWORD *)_rust_alloc(32LL, 8LL);
                      if ( !v33 )
                        alloc::alloc::handle_alloc_error(8LL, 32LL);
                      v17 = (__int64)v33;
                      v34 = v52;
                      v33[1] = *(_OWORD *)v53;
                      *v33 = v34;
                      if ( (_QWORD)v39 != 0x8000000000000000LL )
                      {
                        <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&v39, 8LL);
                        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v39);
                      }
                      v19 = &off_E9928;
                      goto LABEL_39;
                    }
                  }
                }
              }
              else
              {
                v2 = ((v12 << 6) | v6[3] & 0x3E) + ((unsigned __int8)(v7 & 7) << 18) - 48;
                if ( (unsigned int)v2 < 0xA )
                {
                  v2 = ((v7 & 7) << 18) | (v10 << 12) | (v11 << 6) | v6[3] & 0x3Fu;
                  if ( (_DWORD)v2 != 1114112 )
                  {
                    v8 = v6 + 4;
                    goto LABEL_19;
                  }
                }
              }
            }
          }
          else if ( (unsigned int)(v7 - 48) <= 9 )
          {
            v8 = v6 + 1;
            goto LABEL_19;
          }
        }
      }
    }
    if ( (_QWORD)v39 != 0x8000000000000000LL )
    {
      <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&v39, v2);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v39);
    }
  }
  uu_fmt::uu_app(&v52);
  clap_builder::builder::command::Command::try_get_matches_from(&v46, &v52, v43);
  if ( (_QWORD)v46 == 0x8000000000000000LL )
  {
    v17 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v46 + 1));
    v19 = v18;
  }
  else
  {
    v42 = *(_QWORD *)&v47[32];
    v41 = *(_OWORD *)&v47[16];
    v40 = *(_OWORD *)v47;
    v39 = v46;
    uu_fmt::extract_files(&v52, &v39);
    v17 = *((_QWORD *)&v52 + 1);
    v19 = *(__int64 (__fastcall ***)())v53;
    if ( (_QWORD)v52 != 0x8000000000000000LL )
    {
      v35 = v52;
      v36 = *(_QWORD *)v53;
      uu_fmt::FmtOptions::from_matches(&v52, &v39);
      v17 = *((_QWORD *)&v52 + 1);
      v19 = *(__int64 (__fastcall ***)())v53;
      if ( (_QWORD)v52 != 0x8000000000000001LL )
      {
        v49 = v56;
        v48 = v55;
        *(_OWORD *)&v47[24] = v54;
        *(_OWORD *)&v47[8] = *(_OWORD *)&v53[8];
        v46 = v52;
        *(_QWORD *)v47 = *(_QWORD *)v53;
        v20 = std::io::stdio::stdout(&v52);
        v21 = 0x2000LL;
        std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v52, 0x2000LL, v20);
        v22 = *((_QWORD *)&v35 + 1);
        v23 = 24 * v36;
        while ( v23 )
        {
          v21 = *(_QWORD *)(v22 + 16);
          v17 = uu_fmt::process_file(*(_QWORD *)(v22 + 8), v21, &v46, &v52);
          v22 += 24LL;
          v23 -= 24LL;
          if ( v17 )
          {
            v19 = v24;
            <std::io::buffered::bufwriter::BufWriter<W> as core::ops::drop::Drop>::drop(&v52);
            <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&v52, v21);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v52);
            core::ptr::drop_in_place<uu_fmt::FmtOptions>(&v46);
            goto LABEL_37;
          }
        }
        <std::io::buffered::bufwriter::BufWriter<W> as core::ops::drop::Drop>::drop(&v52);
        <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&v52, v21);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v52);
        core::ptr::drop_in_place<uu_fmt::FmtOptions>(&v46);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v35);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v39);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v43);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v43);
        return (unsigned int)uucore::mods::error::get_exit_code();
      }
LABEL_37:
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v35);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v39);
  }
LABEL_39:
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v43);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v43);
  if ( !v17 )
    return (unsigned int)uucore::mods::error::get_exit_code();
  *(_QWORD *)&v37 = v17;
  *((_QWORD *)&v37 + 1) = v19;
  *(_QWORD *)&v46 = &v37;
  *((_QWORD *)&v46 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v52 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&v52 + 1) = 1LL;
  *(_QWORD *)&v53[16] = 0LL;
  *(_QWORD *)v53 = &v46;
  *(_QWORD *)&v53[8] = 1LL;
  alloc::fmt::format::format_inner(&v50, &v52);
  v46 = v50;
  v25 = v51;
  *(_QWORD *)v47 = v51;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v50 + 1), v51, 1LL, 0LL) )
  {
    *(_QWORD *)&v26 = uucore::util_name();
    v39 = v26;
    *(_QWORD *)&v35 = &v39;
    *((_QWORD *)&v35 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v52 = &unk_E9868;
    *((_QWORD *)&v52 + 1) = 2LL;
    *(_QWORD *)&v53[16] = 0LL;
    *(_QWORD *)v53 = &v35;
    *(_QWORD *)&v53[8] = 1LL;
    std::io::stdio::_eprint(&v52);
    *(_QWORD *)&v39 = &v46;
    *((_QWORD *)&v39 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v52 = &unk_E9888;
    *((_QWORD *)&v52 + 1) = 2LL;
    *(_QWORD *)&v53[16] = 0LL;
    *(_QWORD *)v53 = &v39;
    *(_QWORD *)&v53[8] = 1LL;
    std::io::stdio::_eprint(&v52);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v37 + 1) + 104LL))(v37) )
  {
    *(_QWORD *)&v27 = uucore::execution_phrase();
    v39 = v27;
    *(_QWORD *)&v35 = &v39;
    *((_QWORD *)&v35 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v52 = &off_E98A8;
    *((_QWORD *)&v52 + 1) = 2LL;
    *(_QWORD *)&v53[16] = 0LL;
    *(_QWORD *)v53 = &v35;
    *(_QWORD *)&v53[8] = 1LL;
    std::io::stdio::_eprint(&v52);
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v37 + 1) + 96LL))(v37);
  <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&v46, v25);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v46);
  v29 = v37;
  if ( **((_QWORD **)&v37 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v37 + 1))(v37);
  v30 = *(_QWORD *)(*((_QWORD *)&v29 + 1) + 8LL);
  if ( v30 )
    _rust_dealloc(v29, v30, *(_QWORD *)(*((_QWORD *)&v29 + 1) + 16LL));
  return v28;
}
