__int64 __fastcall uu_head::parse::parse_num(__int64 a1, const void *a2, signed __int64 a3)
{
  unsigned __int8 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r14
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  int v12; // esi
  __int64 v13; // r13
  __int64 v14; // rax
  void *v15; // r14
  bool v16; // bp
  __int64 v17; // rdx
  unsigned __int8 *v18; // rdx
  int v19; // esi
  __int64 v20; // rcx
  unsigned __int8 *v21; // rdx
  int v22; // edi
  int v23; // esi
  int v24; // r9d
  int v25; // r8d
  unsigned __int8 v26; // di
  __int64 v27; // r14
  unsigned __int8 *v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rcx
  __int128 v36; // [rsp+0h] [rbp-108h]
  _QWORD v37[2]; // [rsp+10h] [rbp-F8h] BYREF
  __int128 v38; // [rsp+20h] [rbp-E8h]
  _QWORD v39[2]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v40[3]; // [rsp+40h] [rbp-C8h] BYREF
  char v41; // [rsp+58h] [rbp-B0h]
  _QWORD v42[4]; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v43; // [rsp+80h] [rbp-88h]
  char v44; // [rsp+82h] [rbp-86h]
  _QWORD v45[7]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v47; // [rsp+C8h] [rbp-40h]

  v5 = (unsigned __int8 *)core::str::<impl str>::trim_matches(a2, a3);
  if ( v6 )
  {
    v8 = v6;
    v9 = *v5;
    if ( (v9 & 0x80u) != 0 )
    {
      v10 = v9 & 0x1F;
      v11 = v5[1] & 0x3F;
      if ( (unsigned __int8)v9 > 0xDFu )
      {
        v12 = (v11 << 6) | v5[2] & 0x3F;
        if ( (unsigned __int8)v9 < 0xF0u )
        {
          v9 = (v10 << 12) | v12;
          if ( v9 == 43 )
            goto LABEL_16;
        }
        else
        {
          v9 = ((v9 & 7) << 18) | (v12 << 6) | v5[3] & 0x3F;
          if ( v9 == 43 )
            goto LABEL_16;
        }
LABEL_15:
        if ( v9 != 45 )
        {
          v16 = 0;
LABEL_20:
          v17 = 0LL;
          while ( v17 != v8 )
          {
            v20 = v17;
            v21 = &v5[v17];
            v22 = *v21;
            if ( (v22 & 0x80u) == 0 )
            {
              v18 = v21 + 1;
              v19 = v22;
            }
            else
            {
              v23 = v22 & 0x1F;
              v24 = v21[1] & 0x3F;
              if ( (unsigned __int8)v22 <= 0xDFu )
              {
                v18 = v21 + 2;
                v19 = v24 | (v23 << 6);
              }
              else
              {
                v25 = (v24 << 6) | v21[2] & 0x3F;
                if ( (unsigned __int8)v22 < 0xF0u )
                {
                  v18 = v21 + 3;
                  v19 = v25 | (v23 << 12);
                }
                else
                {
                  v26 = v21[3];
                  v18 = v21 + 4;
                  v19 = (v25 << 6) | v26 & 0x3F | ((v23 & 7) << 18);
                }
              }
            }
            v17 = v18 - v5;
            if ( v19 != 48 )
              goto LABEL_31;
          }
          v20 = v8;
LABEL_31:
          v27 = v8 - v20;
          if ( !v27 )
          {
            *(_QWORD *)(a1 + 8) = 0LL;
LABEL_33:
            *(_BYTE *)(a1 + 16) = v16;
            *(_QWORD *)a1 = 3LL;
            return a1;
          }
          v43 = 0;
          v44 = 0;
          v42[0] = 0LL;
          v42[2] = 0LL;
          v28 = &v5[v20];
          uucore::parser::parse_size::Parser::parse(v37, v42, &v5[v20], v27);
          v33 = v37[0];
          if ( v37[0] == 3LL )
          {
            if ( !*((_QWORD *)&v38 + 1) )
            {
              *(_QWORD *)(a1 + 8) = v38;
              goto LABEL_33;
            }
            v40[0] = 0LL;
            v40[1] = v28;
            v40[2] = v27;
            v41 = 1;
            v39[0] = v40;
            v39[1] = <os_display::Quoted as core::fmt::Display>::fmt;
            v45[0] = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
            v45[1] = 2LL;
            v45[4] = 0LL;
            v45[2] = v39;
            v45[3] = 1LL;
            alloc::fmt::format::format_inner(&v46, v45, v29, v30, v31, v32);
            v34 = v46;
            v36 = v47;
            v33 = 2LL;
          }
          else
          {
            v34 = v37[1];
            v36 = v38;
          }
          *(_QWORD *)a1 = v33;
          *(_QWORD *)(a1 + 8) = v34;
          *(_OWORD *)(a1 + 16) = v36;
          return a1;
        }
LABEL_16:
        if ( v8 != 1 && (char)v5[1] < -64 )
          core::str::slice_error_fail(v5, v8, 1LL, v8, &off_EFF30, v7);
        ++v5;
        --v8;
        v16 = v9 == 45;
        goto LABEL_20;
      }
      v9 = v11 | (v10 << 6);
    }
    if ( v9 == 43 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( !a3 )
  {
    v15 = &dword_0 + 1;
    goto LABEL_12;
  }
  if ( a3 < 0 )
  {
    v13 = 0LL;
LABEL_44:
    alloc::raw_vec::handle_error(v13, a3);
  }
  v13 = 1LL;
  v14 = _rust_alloc(a3, 1LL);
  if ( !v14 )
    goto LABEL_44;
  v15 = (void *)v14;
LABEL_12:
  memcpy(v15, a2, a3);
  *(_QWORD *)a1 = 1LL;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = v15;
  *(_QWORD *)(a1 + 24) = a3;
  return a1;
}
