        unsigned __int8 a8)
{
  __int64 v12; // rbx
  char v13; // al
  __int64 v14; // rax
  unsigned __int8 v15; // r9
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 *v21; // rbp
  __int64 *v22; // rax
  __int64 v23; // rbp
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 *v26; // r15
  _BYTE *v27; // rsi
  __int64 v28; // r14
  __int64 v29; // r15
  __int64 v30; // r13
  __int64 v31; // rbp
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v37; // [rsp+28h] [rbp-380h] BYREF
  __int64 v38; // [rsp+30h] [rbp-378h] BYREF
  _QWORD src[20]; // [rsp+38h] [rbp-370h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-2D0h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-2C8h]
  _BYTE v42[160]; // [rsp+E8h] [rbp-2C0h] BYREF
  _QWORD v43[2]; // [rsp+188h] [rbp-220h] BYREF
  _BYTE v44[160]; // [rsp+198h] [rbp-210h] BYREF
  _BYTE dest[160]; // [rsp+238h] [rbp-170h] BYREF
  _BYTE v46[208]; // [rsp+2D8h] [rbp-D0h] BYREF

  v12 = a1;
  v13 = *(_BYTE *)(a4 + 296);
  if ( (v13 & 1) != 0 || !*(_QWORD *)(a4 + 256) )
  {
    if ( a7 )
    {
      if ( *(_QWORD *)(a7 + 32) && *(__int64 *)(a7 + 40) >= 0 )
      {
        if ( (v13 & 1) != 0 )
          std::sys::pal::unix::fs::stat(&v37);
        else
          std::sys::pal::unix::fs::lstat(&v37);
        v23 = v38;
        if ( v37 != 2 )
        {
          memcpy(dest, src, sizeof(dest));
          v40 = v37;
          v41 = v38;
          v27 = dest;
          goto LABEL_35;
        }
        if ( *(_QWORD *)(a4 + 32) && *(__int64 *)(a4 + 40) >= 0 )
        {
          std::sys::pal::unix::fs::lstat(&v37);
          v24 = v37;
          v25 = v38;
          if ( v37 != 2 )
            memcpy(v46, src, 0xA0uLL);
          std::io::error::repr_bitpacked::decode_repr(&v37, v23);
          if ( (unsigned __int8)v37 >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v38);
          if ( v24 == 2 )
          {
            v40 = 2LL;
            std::io::error::repr_bitpacked::decode_repr(&v37, v25);
            if ( (unsigned __int8)v37 >= 3u )
              core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v38);
            v26 = 0LL;
            goto LABEL_36;
          }
          v40 = v24;
          v41 = v25;
          v27 = v46;
LABEL_35:
          memcpy(v42, v27, sizeof(v42));
          v26 = &v40;
LABEL_36:
          v28 = *a5;
          v31 = *(_QWORD *)(a4 + 32);
          v32 = *(_QWORD *)(a4 + 40);
          core::slice::raw::from_raw_parts::precondition_check(v31, 1LL, 1LL, v32);
          v37 = v31;
          v38 = v32;
          src[0] = v26;
LABEL_37:
          v33 = lscolors::LsColors::style_for(v28, &v37);
          v15 = a8;
          a1 = v12;
          v16 = a5;
          v17 = v33;
          v18 = a2;
          v19 = a3;
          goto LABEL_38;
        }
      }
    }
    else
    {
      v20 = *(_QWORD *)(a4 + 72);
      if ( v20 == 3 )
      {
        v21 = (__int64 *)core::cell::once::OnceCell<T>::try_init(a4 + 72, a4, a6);
        v20 = *v21;
      }
      else
      {
        v21 = (__int64 *)(a4 + 72);
      }
      if ( *(_QWORD *)(a4 + 32) && *(__int64 *)(a4 + 40) >= 0 )
      {
        std::sys::pal::unix::fs::lstat(&v37);
        if ( v37 == 2 )
        {
          v43[0] = 2LL;
          std::io::error::repr_bitpacked::decode_repr(&v37, v38);
          if ( (unsigned __int8)v37 >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v38);
          v22 = 0LL;
        }
        else
        {
          memcpy(v44, src, sizeof(v44));
          v43[0] = v37;
          v43[1] = v38;
          v22 = v43;
        }
        v12 = a1;
        if ( v20 == 2 )
          v21 = v22;
        v28 = *a5;
        v29 = *(_QWORD *)(a4 + 32);
        v30 = *(_QWORD *)(a4 + 40);
        core::slice::raw::from_raw_parts::precondition_check(v29, 1LL, 1LL, v30);
        v37 = v29;
        v38 = v30;
        src[0] = v21;
        goto LABEL_37;
      }
    }
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
  }
  v14 = lscolors::LsColors::style_for(*a5, a4 + 256);
  v15 = a8;
  v16 = a5;
  v17 = v14;
  v18 = a2;
  v19 = a3;
LABEL_38:
  uu_ls::colors::StyleManager::apply_style(a1, v16, v17, v18, v19, v15);
  return v12;
}
