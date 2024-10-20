__int64 __fastcall uu_env::load_config_file(__int64 a1)
{
  _QWORD *v1; // rcx
  unsigned __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rbx
  char v5; // dl
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // r12
  volatile __int32 *v17; // [rsp+8h] [rbp-240h]
  char v18; // [rsp+10h] [rbp-238h]
  _QWORD *v19; // [rsp+18h] [rbp-230h]
  _QWORD *v20; // [rsp+18h] [rbp-230h]
  _QWORD *v21; // [rsp+28h] [rbp-220h]
  _BYTE *v22; // [rsp+30h] [rbp-218h]
  __int64 v23; // [rsp+38h] [rbp-210h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-208h] BYREF
  __int128 v25; // [rsp+50h] [rbp-1F8h]
  __int64 v26; // [rsp+60h] [rbp-1E8h]
  _QWORD v27[2]; // [rsp+68h] [rbp-1E0h] BYREF
  __int128 v28; // [rsp+78h] [rbp-1D0h]
  __int64 v29; // [rsp+88h] [rbp-1C0h]
  _QWORD v30[2]; // [rsp+90h] [rbp-1B8h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-1A8h]
  __int64 v32; // [rsp+B0h] [rbp-198h]
  _QWORD v33[3]; // [rsp+B8h] [rbp-190h] BYREF
  _QWORD dest[19]; // [rsp+D0h] [rbp-178h] BYREF
  __int64 v35; // [rsp+168h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+170h] [rbp-D8h]
  __int64 v37; // [rsp+178h] [rbp-D0h]
  _OWORD src[12]; // [rsp+180h] [rbp-C8h] BYREF

  v1 = *(_QWORD **)(a1 + 8);
  if ( !v1 || ((unsigned __int8)v1 & 7) != 0 || (v2 = *(_QWORD *)(a1 + 16), v2 >> 59) )
    core::panicking::panic_nounwind(anon_052fca71c90c2392f068f97c2252574e_9_llvm_18365996230866053775, 162LL);
  result = 0LL;
  if ( v2 )
  {
    v21 = &v1[2 * v2];
    do
    {
      v19 = v1;
      v4 = v1[1];
      v22 = (_BYTE *)*v1;
      if ( v4 == 1 && *(_BYTE *)*v1 == 45 )
      {
        v23 = std::io::stdio::stdin();
        v17 = (volatile __int32 *)std::io::stdio::Stdin::lock(&v23);
        v18 = v5 & 1;
        ini::Ini::read_from_opt(&v35);
        if ( (v18 & 1) == 0
          && (core::sync::atomic::atomic_load(&std::panicking::panic_count::GLOBAL_PANIC_COUNT, 0LL) & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
        {
          core::sync::atomic::atomic_store(v17 + 1, 1LL, 0LL);
        }
        if ( _InterlockedExchange(v17, 0) == 2 )
          std::sys::sync::mutex::futex::Mutex::wake(v17);
      }
      else
      {
        ini::Ini::load_from_file_opt(&v35);
      }
      if ( v35 == 0x8000000000000000LL )
      {
        v30[0] = v36;
        v30[1] = v37;
        v31 = src[0];
        v32 = *(_QWORD *)&src[1];
        return uu_env::load_config_file::{{closure}}(v22, v4, v30);
      }
      v20 = v19 + 2;
      memcpy(dest, src, sizeof(dest));
      v33[0] = v35;
      v33[1] = v36;
      v33[2] = v37;
      v24[0] = v33;
      v24[1] = &dest[5];
      v25 = *(_OWORD *)&dest[9];
      v26 = dest[11];
      while ( 1 )
      {
        v6 = (_QWORD *)<ordered_multimap::list_ordered_multimap::Iter<Key,Value> as core::iter::traits::iterator::Iterator>::next(v24);
        if ( !v6 )
          break;
        v8 = v7;
        if ( *v6 != 0x8000000000000000LL )
          core::slice::raw::from_raw_parts::precondition_check(v6[1], 1LL, 1LL, v6[2]);
        if ( !v8 )
          break;
        v9 = *(_QWORD *)(v8 + 112);
        v27[0] = v8;
        v27[1] = v8 + 64;
        v28 = *(_OWORD *)(v8 + 96);
        v29 = v9;
        while ( 1 )
        {
          v10 = <ordered_multimap::list_ordered_multimap::Iter<Key,Value> as core::iter::traits::iterator::Iterator>::next(v27);
          if ( !v10 )
            break;
          v12 = v11;
          v13 = *(_QWORD *)(v10 + 8);
          v14 = *(_QWORD *)(v10 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v13, 1LL, 1LL, v14);
          v15 = *(_QWORD *)(v12 + 8);
          v16 = *(_QWORD *)(v12 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v15, 1LL, 1LL, v16);
          if ( !v13 )
            break;
          std::env::set_var(v13, v14, v15, v16);
        }
      }
      core::ptr::drop_in_place<ordered_multimap::list_ordered_multimap::ListOrderedMultimap<core::option::Option<alloc::string::String>,ini::Properties>>(v33);
      v1 = v20;
    }
    while ( v20 != v21 );
    return 0LL;
  }
  return result;
}
