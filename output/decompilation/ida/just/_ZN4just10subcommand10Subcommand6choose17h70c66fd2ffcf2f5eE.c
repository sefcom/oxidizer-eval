__int64 __fastcall just::subcommand::Subcommand::choose(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6)
{
  _QWORD *v8; // rax
  __int64 v9; // rax
  char v10; // r12
  __int64 v11; // rbp
  __int64 v12; // r15
  double v13; // rax
  __m128 v14; // xmm0
  double v15; // rcx
  _QWORD *v16; // rbx
  _QWORD *v17; // r14
  __int64 v18; // r12
  __int128 v19; // kr00_16
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  _QWORD *i; // rbp
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rbx
  __int64 v31; // [rsp+10h] [rbp-298h]
  __int64 v32; // [rsp+20h] [rbp-288h] BYREF
  _QWORD *v33; // [rsp+28h] [rbp-280h]
  __int64 v34; // [rsp+30h] [rbp-278h]
  int v35; // [rsp+3Ch] [rbp-26Ch]
  __int128 v36; // [rsp+40h] [rbp-268h] BYREF
  __int64 v37; // [rsp+50h] [rbp-258h]
  _QWORD *v38; // [rsp+58h] [rbp-250h]
  _QWORD *v39; // [rsp+60h] [rbp-248h]
  __int64 v40; // [rsp+68h] [rbp-240h]
  _BYTE v41[28]; // [rsp+70h] [rbp-238h] BYREF
  __int64 v42; // [rsp+98h] [rbp-210h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-208h]
  __int64 v44; // [rsp+A8h] [rbp-200h]
  __int128 v45; // [rsp+B0h] [rbp-1F8h] BYREF
  __int128 v46; // [rsp+C0h] [rbp-1E8h]
  __int128 v47; // [rsp+D0h] [rbp-1D8h]
  __int64 v48; // [rsp+E0h] [rbp-1C8h]
  _BYTE *v49; // [rsp+E8h] [rbp-1C0h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+F0h] [rbp-1B8h]
  __int64 v51; // [rsp+F8h] [rbp-1B0h]
  _BYTE v52[28]; // [rsp+100h] [rbp-1A8h] BYREF
  int v53; // [rsp+128h] [rbp-180h] BYREF
  _BYTE v54[28]; // [rsp+12Ch] [rbp-17Ch]
  __int64 *v55; // [rsp+148h] [rbp-160h]
  __int128 dest; // [rsp+150h] [rbp-158h] BYREF
  __int128 v57; // [rsp+160h] [rbp-148h] BYREF
  __int128 v58; // [rsp+170h] [rbp-138h]
  __int64 v59; // [rsp+180h] [rbp-128h]
  __int16 v60; // [rsp+188h] [rbp-120h]
  _QWORD v61[3]; // [rsp+230h] [rbp-78h] BYREF
  double v62[4]; // [rsp+248h] [rbp-60h] BYREF
  __m128 v63; // [rsp+268h] [rbp-40h]

  v55 = a5;
  v40 = a4;
  v42 = 0LL;
  v43 = 8LL;
  v44 = 0LL;
  v8 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 8LL);
  if ( !v8 )
    alloc::alloc::handle_alloc_error(8LL, 8LL);
  v31 = a6;
  v38 = a3;
  *v8 = a3;
  v32 = 1LL;
  v33 = v8;
  v9 = 1LL;
  v39 = (_QWORD *)a2;
  v10 = *(_BYTE *)(a2 + 419);
  do
  {
    v34 = v9 - 1;
    v11 = v33[v9 - 1];
    just::justfile::Justfile::public_recipes((__int64)&dest, (_QWORD *)v11, v10);
    v12 = *((_QWORD *)&dest + 1);
    alloc::vec::Vec<T,A>::extend_desugared(&v42, *((_QWORD *)&dest + 1), *((_QWORD *)&dest + 1) + 8 * v57);
    core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(dest, v12);
    v13 = *(double *)(v11 + 672);
    if ( v13 == 0.0 )
    {
      v14 = 0LL;
      v15 = 0.0;
    }
    else
    {
      v14 = *(__m128 *)(v11 + 680);
      *(_QWORD *)&v15 = 1LL;
    }
    *(double *)v61 = v15;
    v61[1] = 0LL;
    *(double *)&v61[2] = v13;
    _mm_storel_ps(v62, v14);
    v62[1] = v15;
    v62[2] = 0.0;
    v62[3] = v13;
    v63 = v14;
    alloc::vec::Vec<T,A>::extend_desugared(&v32, v61);
    v9 = v34;
  }
  while ( v34 );
  if ( !v44 )
  {
    *(_BYTE *)a1 = 35;
LABEL_14:
    core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(v32, v33);
    v21 = v42;
    v22 = v43;
    return core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(v21, v22);
  }
  if ( v31 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, v31);
    v16 = v39;
    v17 = v38;
  }
  else
  {
    *(_QWORD *)&dest = 0LL;
    *((_QWORD *)&dest + 1) = 1LL;
    *(_QWORD *)&v57 = 0LL;
    std::ffi::os_str::OsString::push(&dest, aFzfMultiPrevie, 66LL);
    v16 = v39;
    v17 = v38;
    std::ffi::os_str::OsString::push(&dest, v40);
    std::ffi::os_str::OsString::push(&dest, &unk_9527D, 12LL);
  }
  v37 = v57;
  v36 = dest;
  just::settings::Settings::shell_command(&dest);
  std::process::Command::arg(&dest, &v36);
  std::process::Command::current_dir(&dest, v40 + 24);
  std::process::Command::stdin(&dest, 2LL);
  std::process::Command::stdout(&dest, 2LL);
  std::process::Command::spawn(&v53, &dest);
  core::ptr::drop_in_place<std::process::Command>(&dest);
  if ( v53 == 1 )
  {
    v18 = *(_QWORD *)&v54[4];
    *(_QWORD *)v41 = *(_QWORD *)&v54[4];
    just::settings::Settings::shell((const char **)&dest, v17 + 21, v16);
    v19 = v57;
    v20 = v58;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, dest);
    *(_QWORD *)&v46 = v57;
    v45 = dest;
    alloc::str::join_generic_copy(&dest, *((_QWORD *)&v19 + 1), v20, asc_6E4F0, 1LL);
    *(_QWORD *)(a1 + 56) = v57;
    *(_OWORD *)(a1 + 40) = dest;
    *(_QWORD *)(a1 + 80) = v37;
    *(_OWORD *)(a1 + 64) = v36;
    *(_OWORD *)(a1 + 16) = v45;
    *(_QWORD *)(a1 + 32) = v46;
    *(_BYTE *)a1 = 4;
    *(_QWORD *)(a1 + 8) = v18;
    core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(
      v19,
      *((_QWORD *)&v19 + 1));
    goto LABEL_14;
  }
  v35 = v53;
  *(_OWORD *)&v52[12] = *(_OWORD *)&v54[12];
  *(_OWORD *)v52 = *(_OWORD *)v54;
  if ( *(_DWORD *)&v54[16] == -1 )
    core::option::unwrap_failed(&off_431140);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v45, &v42);
  v23 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v45);
  for ( i = v38; v23; v23 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v45) )
  {
    just::recipe::Recipe::spaced_namepath((int)v41, v23);
    v49 = v41;
    v50 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &unk_42DBD8;
    *((_QWORD *)&dest + 1) = 2LL;
    *(_QWORD *)&v58 = 0LL;
    *(_QWORD *)&v57 = &v49;
    *((_QWORD *)&v57 + 1) = 1LL;
    v25 = std::io::Write::write_fmt(&v52[16], &dest);
    if ( v25 )
    {
      *(_QWORD *)&dest = v25;
      v26 = v25;
      if ( (unsigned __int8)std::io::error::Error::kind(v25) != 11 )
      {
        *(_QWORD *)(a1 + 32) = v37;
        *(_OWORD *)(a1 + 16) = v36;
        *(_BYTE *)a1 = 7;
        *(_QWORD *)(a1 + 8) = v26;
        core::ptr::drop_in_place<alloc::string::String>(v41);
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&just::binding::Binding<just::expression::Expression>>>(&v45);
        core::ptr::drop_in_place<std::process::Child>(v52);
        goto LABEL_28;
      }
      core::ptr::drop_in_place<std::io::error::Error>(&dest);
      i = v38;
    }
    core::ptr::drop_in_place<alloc::string::String>(v41);
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&just::binding::Binding<just::expression::Expression>>>(&v45);
  *(_OWORD *)&v41[12] = *(_OWORD *)&v52[12];
  *(_OWORD *)v41 = *(_OWORD *)v52;
  std::process::Child::wait_with_output(&dest, v41);
  if ( __OFSUB__(0LL, (_QWORD)dest) )
  {
    v27 = *((_QWORD *)&dest + 1);
    *(_QWORD *)(a1 + 32) = v37;
    *(_OWORD *)(a1 + 16) = v36;
    *(_BYTE *)a1 = 5;
    *(_QWORD *)(a1 + 8) = v27;
  }
  else
  {
    v28 = v59;
    v48 = v59;
    v47 = v58;
    v46 = v57;
    v45 = dest;
    if ( (_DWORD)v59 )
    {
      *(_QWORD *)(a1 + 24) = v37;
      *(_OWORD *)(a1 + 8) = v36;
      *(_BYTE *)a1 = 6;
      *(_DWORD *)(a1 + 4) = v28;
      core::ptr::drop_in_place<std::process::Output>(&v45);
    }
    else
    {
      alloc::string::String::from_utf8_lossy(&v49, *((_QWORD *)&v45 + 1), v46);
      v29 = v51;
      <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(&v57, v50, v51);
      *(_QWORD *)&dest = 0LL;
      *((_QWORD *)&dest + 1) = v29;
      v60 = 1;
      core::iter::traits::iterator::Iterator::collect(v41, &dest);
      just::justfile::Justfile::run(a1, i, (__int64)v39, v40, v55, *(__int64 *)&v41[8], *(__int64 *)&v41[16]);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v41);
      core::ptr::drop_in_place<just::request::Request>(&v49);
      core::ptr::drop_in_place<std::process::Output>(&v45);
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v36);
    }
  }
LABEL_28:
  v21 = v32;
  v22 = (__int64)v33;
  return core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(v21, v22);
}