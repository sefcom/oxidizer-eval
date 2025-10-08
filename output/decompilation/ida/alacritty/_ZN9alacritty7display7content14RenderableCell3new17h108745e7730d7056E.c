__int64 __fastcall alacritty::display::content::RenderableCell::new(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r15
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // r15
  int v11; // xmm0_4
  char v12; // al
  __int128 v13; // xmm0
  int v14; // edx
  char v15; // r13
  unsigned int *v16; // rsi
  int v17; // eax
  char v18; // dl
  unsigned int v19; // r13d
  __int64 *v20; // r15
  int v21; // r12d
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  int v27; // eax
  int v28; // xmm1_4
  int v29; // r12d
  __int64 v30; // r12
  unsigned int v31; // r13d
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  bool v39; // zf
  __int64 v40; // rdi
  __int64 v41; // r15
  int v42; // r14d
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 result; // rax
  __int64 v46; // rcx
  _WORD v47[2]; // [rsp+Ch] [rbp-9Ch] BYREF
  _WORD v48[2]; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v49; // [rsp+14h] [rbp-94h]
  int v50; // [rsp+18h] [rbp-90h]
  float v51; // [rsp+1Ch] [rbp-8Ch] BYREF
  __int64 *v52; // [rsp+20h] [rbp-88h]
  int v53; // [rsp+2Ch] [rbp-7Ch]
  _OWORD v54[2]; // [rsp+30h] [rbp-78h] BYREF
  char v55; // [rsp+50h] [rbp-58h]
  _DWORD v56[3]; // [rsp+51h] [rbp-57h]
  unsigned int *v57; // [rsp+60h] [rbp-48h]
  _OWORD v58[4]; // [rsp+68h] [rbp-40h] BYREF

  v3 = a3;
  v6 = *a3;
  v7 = alacritty::display::content::RenderableCell::compute_fg_rgb(
         a2,
         *(unsigned int *)(*a3 + 8),
         *(unsigned int *)(*a3 + 20));
  v47[0] = v7;
  LOBYTE(v47[1]) = BYTE2(v7);
  v8 = alacritty::display::content::RenderableCell::compute_bg_rgb(
         *(_QWORD *)(a2 + 120),
         *(_QWORD *)(a2 + 240),
         *(unsigned int *)(v6 + 12));
  v48[0] = v8;
  LOBYTE(v48[1]) = BYTE2(v8);
  v9 = *(unsigned __int16 *)(v6 + 20);
  v52 = v3;
  if ( (v9 & 1) != 0 )
  {
    core::intrinsics::typed_swap_nonoverlapping(v47, v48);
    v51 = 1.0;
    v12 = *(_BYTE *)(a2 + 184);
    if ( v12 == 2 )
    {
LABEL_9:
      v49 = v9;
      v15 = 0;
      goto LABEL_10;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 232);
    LODWORD(v54[0]) = *(_DWORD *)(v6 + 12);
    v11 = 0;
    if ( !(unsigned __int8)<vte::ansi::Color as core::cmp::PartialEq>::eq(v54, &unk_EB2CC) )
    {
      if ( *(_BYTE *)(v10 + 655) == 1 )
        v11 = *(_DWORD *)(v10 + 420);
      else
        v11 = 1065353216;
    }
    v51 = *(float *)&v11;
    v3 = v52;
    v12 = *(_BYTE *)(a2 + 184);
    if ( v12 == 2 )
      goto LABEL_9;
  }
  v13 = *(_OWORD *)(a2 + 152);
  v54[1] = *(_OWORD *)(a2 + 168);
  v54[0] = v13;
  v14 = *(_DWORD *)(a2 + 188);
  v56[0] = *(_DWORD *)(a2 + 185);
  *(_DWORD *)((char *)v56 + 3) = v14;
  v55 = v12;
  v15 = alacritty_terminal::selection::SelectionRange::contains_cell(
          v54,
          v3,
          *(_QWORD *)(a2 + 128),
          *(unsigned int *)(a2 + 136),
          *(unsigned int *)(a2 + 280));
  v49 = *(unsigned __int16 *)(v6 + 20);
LABEL_10:
  v53 = *(_DWORD *)(a2 + 72);
  v16 = *(unsigned int **)(a2 + 232);
  v50 = *(_DWORD *)(v6 + 16);
  if ( *(_QWORD *)(a2 + 32) != 0x8000000000000001LL )
  {
    v17 = alacritty::display::content::Hint::advance(
            a2 + 32,
            (unsigned int)-v53,
            *(_QWORD *)(*(_QWORD *)(a2 + 248) + 8LL),
            v52[1],
            *((unsigned int *)v52 + 4));
    if ( v17 != (_DWORD)&unk_110001 )
    {
      v29 = v17;
      if ( (v18 & 1) != 0 )
      {
        alacritty::display::content::RenderableCell::compute_cell_rgb(v47, v48, &v51, v16[138], v16[139]);
        v19 = v49;
        v20 = v52;
      }
      else
      {
        v19 = v49;
        v20 = v52;
        if ( v17 == (_DWORD)&unk_110000 )
          v19 = v49 | 8;
        else
          alacritty::display::content::RenderableCell::compute_cell_rgb(v47, v48, &v51, v16[140], v16[141]);
      }
      v36 = v50;
      if ( v29 != (_DWORD)&unk_110000 )
        v36 = v29;
      v21 = v36;
      goto LABEL_34;
    }
  }
  if ( !v15 )
  {
    if ( *(_QWORD *)a2 == 0x8000000000000001LL )
    {
      v19 = v49;
      goto LABEL_19;
    }
    v57 = v16;
    v20 = v52;
    v30 = v52[1];
    v31 = *((_DWORD *)v52 + 4);
    if ( (unsigned __int8)alacritty::display::content::HintMatches::advance(a2, v30, v31) )
    {
      v32 = *(_QWORD *)(a2 + 272);
      if ( v32 )
      {
        v33 = 8 * ((unsigned __int8)core::ops::range::RangeBounds::contains(v32, v30, v31) ^ 1u);
        v34 = v33 + 536;
        v35 = v33 + 540;
      }
      else
      {
        v35 = 548LL;
        v34 = 544LL;
      }
      v19 = v49;
      v21 = v50;
      alacritty::display::content::RenderableCell::compute_cell_rgb(
        v47,
        v48,
        &v51,
        *(unsigned int *)((char *)v57 + v34),
        *(unsigned int *)((char *)v57 + v35));
    }
    else
    {
      v19 = v49;
      v21 = v50;
    }
LABEL_34:
    v28 = LODWORD(v51);
    if ( v51 <= 0.0 )
      goto LABEL_37;
    goto LABEL_35;
  }
  alacritty::display::content::RenderableCell::compute_cell_rgb(v47, v48, &v51, v16[132], v16[133]);
  v19 = v49;
  if ( LOBYTE(v47[0]) != LOBYTE(v48[0]) )
  {
LABEL_19:
    v20 = v52;
    v21 = v50;
    goto LABEL_34;
  }
  v20 = v52;
  v21 = v50;
  if ( *(_WORD *)((char *)v47 + 1) != *(_WORD *)((char *)v48 + 1) || (*(_BYTE *)(v6 + 21) & 1) != 0 )
    goto LABEL_34;
  v22 = *(_QWORD *)(a2 + 120);
  v23 = *(_QWORD *)(a2 + 240);
  v24 = alacritty::display::content::RenderableContent::color(v22, v23, 0x101uLL);
  v47[0] = v24;
  LOBYTE(v47[1]) = BYTE2(v24);
  v25 = v22;
  v21 = v50;
  v26 = v23;
  v19 = v49;
  v27 = alacritty::display::content::RenderableContent::color(v25, v26, 0x100uLL);
  v48[0] = v27;
  LOBYTE(v48[1]) = BYTE2(v27);
  v28 = 1065353216;
LABEL_35:
  v37 = *(_QWORD *)(a2 + 232);
  if ( *(_BYTE *)(v37 + 655) )
    v28 = *(_DWORD *)(v37 + 420);
LABEL_37:
  v53 += *((_DWORD *)v20 + 4);
  if ( v53 < 0 )
    core::option::unwrap_failed(&off_882120);
  v38 = *(_QWORD *)v6;
  v39 = *(_QWORD *)v6 == 0LL;
  LODWORD(v52) = v28;
  if ( v39 )
    v40 = 3LL;
  else
    v40 = *(unsigned int *)(v38 + 48);
  v41 = v20[1];
  v42 = core::option::Option<T>::map_or(v40, (LOBYTE(v47[1]) << 16) | (unsigned int)v47[0], a2, v19);
  v43 = *(_QWORD *)v6;
  if ( *(_QWORD *)v6 )
  {
    v58[0] = *(_OWORD *)(v43 + 24);
    v44 = alacritty_terminal::term::cell::Cell::hyperlink(v43);
  }
  else
  {
    *(_QWORD *)&v58[0] = 0LL;
    v44 = alacritty_terminal::term::cell::Cell::hyperlink(0LL);
    *(_QWORD *)&v54[0] = v58;
    *((_QWORD *)&v54[0] + 1) = v44;
    if ( !v44 )
    {
      core::ptr::drop_in_place<alacritty::display::content::RenderableCell::new::{{closure}}>(v54);
      result = 0LL;
      goto LABEL_45;
    }
  }
  result = alacritty::display::content::RenderableCell::new::{{closure}}(v58, v44);
LABEL_45:
  v46 = (unsigned int)v53;
  *(_BYTE *)(a1 + 36) = v47[1];
  *(_WORD *)(a1 + 34) = v47[0];
  *(_BYTE *)(a1 + 39) = v48[1];
  *(_WORD *)(a1 + 37) = v48[0];
  *(_DWORD *)(a1 + 28) = v21;
  *(_QWORD *)a1 = v46;
  *(_QWORD *)(a1 + 8) = v41;
  *(_DWORD *)(a1 + 24) = (_DWORD)v52;
  *(_BYTE *)(a1 + 42) = BYTE2(v42);
  *(_WORD *)(a1 + 40) = v42;
  *(_WORD *)(a1 + 32) = v19;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}