__int64 __fastcall uu_env::load_config_file(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // r14
  _BYTE *v4; // rsi
  __int64 v5; // r14
  char v6; // dl
  volatile __int32 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // [rsp+0h] [rbp-2F8h]
  __int64 v19; // [rsp+18h] [rbp-2E0h]
  __int64 *v20; // [rsp+20h] [rbp-2D8h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-2D0h]
  __int128 v22; // [rsp+30h] [rbp-2C8h]
  __int64 v23; // [rsp+40h] [rbp-2B8h]
  __int64 v24; // [rsp+50h] [rbp-2A8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-2A0h] BYREF
  __int128 v26; // [rsp+60h] [rbp-298h]
  __int64 v27; // [rsp+70h] [rbp-288h]
  _QWORD v28[3]; // [rsp+78h] [rbp-280h] BYREF
  _QWORD v29[4]; // [rsp+90h] [rbp-268h] BYREF
  _QWORD v30[3]; // [rsp+B0h] [rbp-248h] BYREF
  char v31; // [rsp+C8h] [rbp-230h]
  __int64 v32; // [rsp+D0h] [rbp-228h] BYREF
  __int64 v33; // [rsp+D8h] [rbp-220h]
  __int64 v34; // [rsp+E0h] [rbp-218h]
  _QWORD dest[19]; // [rsp+E8h] [rbp-210h] BYREF
  _BYTE src[152]; // [rsp+180h] [rbp-178h] BYREF
  __int64 v37; // [rsp+218h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+220h] [rbp-D8h]
  __int64 v39; // [rsp+228h] [rbp-D0h]
  __int128 v40; // [rsp+230h] [rbp-C8h]
  __int64 v41; // [rsp+240h] [rbp-B8h]
  __int128 v42; // [rsp+248h] [rbp-B0h]
  __int128 v43; // [rsp+258h] [rbp-A0h]
  __int128 v44; // [rsp+268h] [rbp-90h]
  __int128 v45; // [rsp+278h] [rbp-80h]
  __int128 v46; // [rsp+288h] [rbp-70h]
  __int128 v47; // [rsp+298h] [rbp-60h]
  __int128 v48; // [rsp+2A8h] [rbp-50h]
  __int128 v49; // [rsp+2B8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 16);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v18 = v3 + 16 * v1;
    while ( 1 )
    {
      v4 = *(_BYTE **)v3;
      v19 = v3;
      v5 = *(_QWORD *)(v3 + 8);
      if ( v5 == 1 && *v4 == 45 )
      {
        *(_QWORD *)src = std::io::stdio::stdin();
        v32 = std::io::stdio::Stdin::lock(src);
        LOBYTE(v33) = v6 & 1;
        ini::Ini::read_from_opt(&v37);
        v7 = (volatile __int32 *)v32;
        if ( !(_BYTE)v33 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0 )
        {
          v12 = v32;
          if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path(v32, &v32) )
            *(_BYTE *)(v12 + 4) = 1;
        }
        if ( _InterlockedExchange(v7, 0) == 2 )
          std::sys::sync::mutex::futex::Mutex::wake(v7);
      }
      else
      {
        ini::Ini::load_from_file_opt(&v37);
      }
      if ( v37 == 0x8000000000000000LL )
        break;
      v3 = v19 + 16;
      *(_QWORD *)&src[16] = v41;
      *(_OWORD *)src = v40;
      *(_OWORD *)&src[136] = v49;
      *(_OWORD *)&src[120] = v48;
      *(_OWORD *)&src[104] = v47;
      *(_OWORD *)&src[88] = v46;
      *(_OWORD *)&src[72] = v45;
      *(_OWORD *)&src[56] = v44;
      *(_OWORD *)&src[40] = v43;
      *(_OWORD *)&src[24] = v42;
      memcpy(dest, src, sizeof(dest));
      v32 = v37;
      v33 = v38;
      v34 = v39;
      v20 = &v32;
      v21 = &dest[5];
      v22 = *(_OWORD *)&dest[9];
      v23 = dest[11];
      while ( <ordered_multimap::list_ordered_multimap::Iter<Key,Value> as core::iter::traits::iterator::Iterator>::next(&v20) )
      {
        v9 = *(_QWORD *)(v8 + 112);
        *(_QWORD *)src = v8;
        *(_QWORD *)&src[8] = v8 + 64;
        *(_OWORD *)&src[16] = *(_OWORD *)(v8 + 96);
        *(_QWORD *)&src[32] = v9;
        while ( 1 )
        {
          v10 = <ordered_multimap::list_ordered_multimap::Iter<Key,Value> as core::iter::traits::iterator::Iterator>::next(src);
          if ( !v10 )
            break;
          std::env::set_var(*(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16), *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
        }
      }
      core::ptr::drop_in_place<ini::Ini>(&v32);
      if ( v3 == v18 )
        return 0LL;
    }
    v27 = v41;
    v26 = v40;
    v24 = v38;
    v25 = v39;
    v30[0] = 1LL;
    v30[1] = v4;
    v30[2] = v5;
    v31 = 0;
    v29[0] = v30;
    v29[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v29[2] = &v24;
    v29[3] = <ini::Error as core::fmt::Display>::fmt;
    v20 = (__int64 *)&unk_10C630;
    v21 = (_QWORD *)(&dword_0 + 2);
    v23 = 0LL;
    *(_QWORD *)&v22 = v29;
    *((_QWORD *)&v22 + 1) = 2LL;
    alloc::fmt::format::format_inner(v28, &v20);
    v13 = v28[0];
    v14 = v28[1];
    v15 = v28[2];
    v16 = _rust_alloc(32LL, 8LL);
    if ( !v16 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    *(_QWORD *)v16 = v13;
    *(_QWORD *)(v16 + 8) = v14;
    *(_QWORD *)(v16 + 16) = v15;
    v17 = v16;
    *(_DWORD *)(v16 + 24) = 1;
    if ( v24 != 0x8000000000000000LL )
    {
      if ( v24 == 0x8000000000000001LL )
      {
        core::ptr::drop_in_place<std::io::error::Error>(&v25);
      }
      else if ( v24 )
      {
        _rust_dealloc(v25, v24, 1LL);
      }
    }
    return v17;
  }
  return result;
}
