__int64 __fastcall uu_ls::calculate_padding_collection(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // r10
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 metadata; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 block_size; // rax
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rbx
  __int64 result; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // r12
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 *v39; // r13
  __int64 v40; // r12
  __int64 v41; // rdi
  char v42; // [rsp+4h] [rbp-E4h]
  unsigned __int8 v43; // [rsp+5h] [rbp-E3h]
  char v44; // [rsp+6h] [rbp-E2h]
  char v45; // [rsp+7h] [rbp-E1h]
  __int64 v46; // [rsp+8h] [rbp-E0h]
  __int64 v47; // [rsp+8h] [rbp-E0h]
  __int64 v48; // [rsp+10h] [rbp-D8h]
  unsigned int v49; // [rsp+10h] [rbp-D8h]
  __int64 *v50; // [rsp+18h] [rbp-D0h]
  __int64 v51; // [rsp+20h] [rbp-C8h]
  __int64 v52; // [rsp+28h] [rbp-C0h]
  __int64 v53; // [rsp+30h] [rbp-B8h]
  __int64 v54; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v56; // [rsp+48h] [rbp-A0h]
  __int64 v57; // [rsp+50h] [rbp-98h]
  __int64 v58; // [rsp+58h] [rbp-90h]
  _QWORD v59[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v60; // [rsp+70h] [rbp-78h]
  __int64 v61; // [rsp+78h] [rbp-70h]
  __int64 v62; // [rsp+80h] [rbp-68h]
  __int64 v63; // [rsp+88h] [rbp-60h]
  __int64 v64; // [rsp+90h] [rbp-58h]
  __int64 v65; // [rsp+98h] [rbp-50h]
  __int64 v66; // [rsp+A0h] [rbp-48h]
  __int64 v67; // [rsp+A8h] [rbp-40h]
  __int64 v68; // [rsp+B0h] [rbp-38h]

  v6 = a2;
  v68 = a3;
  v7 = a2 + 304 * a3;
  v42 = *(_BYTE *)(a4 + 241);
  v56 = *(_QWORD *)(a4 + 216);
  if ( *(_BYTE *)(a4 + 256) == 1 )
  {
    v45 = *(_BYTE *)(a4 + 242);
    v43 = *(_BYTE *)(a4 + 249);
    v44 = *(_BYTE *)(a4 + 243);
    v8 = 1LL;
    v46 = 1LL;
    v9 = 1LL;
    v10 = 1LL;
    v52 = 1LL;
    v48 = 1LL;
    v54 = 1LL;
    v53 = 1LL;
    v51 = 1LL;
    while ( 1 )
    {
      v11 = v10;
      v12 = v9;
      v58 = v8;
      v57 = v11;
      if ( (v42 & 1) != 0 )
      {
        do
        {
          if ( v6 == v7 )
          {
            v23 = v51;
            result = v46;
            v31 = v52;
            v32 = v48;
            v33 = v54;
            v34 = v53;
            v35 = v58;
            v11 = v57;
            goto LABEL_36;
          }
          v13 = v6 + 304;
          metadata = uu_ls::PathData::get_metadata(v6, a5);
          v6 += 304LL;
        }
        while ( !metadata );
        uu_ls::display_inode((__int64)v59, *(_QWORD *)(metadata + 40));
        v15 = v60;
        core::ptr::drop_in_place<alloc::string::String>(v59);
        v51 = core::cmp::Ord::max(v15, v51);
        v6 = v13 - 304;
        v67 = v9;
        if ( (v45 & 1) != 0 )
          goto LABEL_10;
      }
      else
      {
        if ( v6 == v7 )
        {
          v35 = v8;
          v23 = v51;
          result = v46;
          v31 = v52;
          v32 = v48;
          v33 = v54;
          v34 = v53;
          goto LABEL_36;
        }
        v13 = v6 + 304;
        v67 = v9;
        if ( (v45 & 1) != 0 )
        {
LABEL_10:
          v16 = uu_ls::PathData::get_metadata(v6, a5);
          if ( v16 )
          {
            block_size = uu_ls::get_block_size(*(_DWORD *)(v16 + 56), *(_QWORD *)(v16 + 96), v56, v43);
            uu_ls::display_size((__int64)v59, block_size, v43);
            v18 = v60;
            core::ptr::drop_in_place<alloc::string::String>(v59);
            v46 = core::cmp::Ord::max(v18, v46);
          }
        }
      }
      v19 = *(_QWORD *)(v6 + 64);
      uu_ls::display_dir_entry_size(v59, v6, a4, a5);
      v20 = v59[1];
      v21 = v60;
      v66 = v61;
      v64 = v62;
      v65 = v63;
      v53 = core::cmp::Ord::max(v59[0], v53);
      v54 = core::cmp::Ord::max(v20, v54);
      v48 = core::cmp::Ord::max(v21, v48);
      if ( (v44 & 1) != 0 )
        v52 = core::cmp::Ord::max(v19, v52);
      v6 = v13;
      v9 = 0LL;
      v10 = 0LL;
      v8 = 0LL;
      if ( v68 != 1 )
      {
        v10 = core::cmp::Ord::max(v64, v57);
        v9 = core::cmp::Ord::max(v65, v67);
        v22 = core::cmp::Ord::max(v66, v58);
        v8 = core::cmp::Ord::max(v22, v10);
        v6 = v13;
      }
    }
  }
  if ( (*(_BYTE *)(a4 + 242) & 1) != 0 )
  {
    v50 = a1;
    v47 = 1LL;
    v49 = *(unsigned __int8 *)(a4 + 249);
    v23 = 1LL;
LABEL_18:
    v24 = v6;
    while ( (v42 & 1) == 0 )
    {
      if ( v24 == v7 )
        goto LABEL_34;
      v6 = v24 + 304;
LABEL_25:
      v27 = uu_ls::PathData::get_metadata(v24, a5);
      v24 = v6;
      if ( v27 )
      {
        v28 = uu_ls::get_block_size(*(_DWORD *)(v27 + 56), *(_QWORD *)(v27 + 96), v56, v49);
        uu_ls::display_size((__int64)v59, v28, v49);
        v29 = v60;
        core::ptr::drop_in_place<alloc::string::String>(v59);
        v47 = core::cmp::Ord::max(v29, v47);
        goto LABEL_18;
      }
    }
    while ( v24 != v7 )
    {
      v6 = v24 + 304;
      v25 = uu_ls::PathData::get_metadata(v24, a5);
      v24 += 304LL;
      if ( v25 )
      {
        uu_ls::display_inode((__int64)v59, *(_QWORD *)(v25 + 40));
        v26 = v60;
        core::ptr::drop_in_place<alloc::string::String>(v59);
        v23 = core::cmp::Ord::max(v26, v23);
        v24 = v6 - 304;
        goto LABEL_25;
      }
    }
LABEL_34:
    v12 = 1LL;
    a1 = v50;
    result = v47;
    v11 = 1LL;
    v35 = 1LL;
    v34 = 1LL;
    v33 = 1LL;
    v32 = 1LL;
    v31 = 1LL;
  }
  else
  {
    result = 1LL;
    v12 = 1LL;
    v11 = 1LL;
    v35 = 1LL;
    v31 = 1LL;
    v32 = 1LL;
    v33 = 1LL;
    v34 = 1LL;
    v23 = 1LL;
    if ( (v42 & 1) != 0 )
    {
      v36 = a1;
LABEL_30:
      v37 = v6;
      while ( v37 != v7 )
      {
        v6 = v37 + 304;
        v38 = uu_ls::PathData::get_metadata(v37, a5);
        v37 += 304LL;
        if ( v38 )
        {
          uu_ls::display_inode((__int64)v59, *(_QWORD *)(v38 + 40));
          v39 = v36;
          v40 = v60;
          core::ptr::drop_in_place<alloc::string::String>(v59);
          v41 = v40;
          v36 = v39;
          v12 = core::cmp::Ord::max(v41, v12);
          goto LABEL_30;
        }
      }
      result = 1LL;
      a1 = v36;
      v11 = 1LL;
      v35 = 1LL;
      v34 = 1LL;
      v33 = 1LL;
      v32 = 1LL;
      v31 = 1LL;
      v23 = v12;
      v12 = 1LL;
    }
  }
LABEL_36:
  *a1 = v23;
  a1[1] = v34;
  a1[2] = v33;
  a1[3] = v32;
  a1[4] = v31;
  a1[5] = v35;
  a1[6] = v11;
  a1[7] = v12;
  a1[8] = result;
  return result;
}