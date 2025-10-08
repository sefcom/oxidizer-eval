__int64 __fastcall alacritty_terminal::vi_mode::ViModeCursor::motion(
        const char *a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  unsigned int v5; // r14d
  __int64 v6; // r15
  unsigned __int64 v7; // rax
  int v8; // ecx
  bool v9; // cf
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // edx
  int v25; // ebp
  __int64 v26; // r8
  unsigned int v27; // r12d
  __int64 v28; // rax
  int v29; // edx
  int v30; // r12d
  unsigned __int64 v31; // rcx
  int v32; // edx
  unsigned __int64 v33; // rcx
  char is_wrap; // cl
  __int64 v35; // rax
  __int64 occupied; // rax
  unsigned int v37; // edx
  __int64 v38; // r15
  unsigned int v39; // edx
  unsigned int v40; // r12d
  unsigned int v41; // ebp
  __int64 v42; // rsi
  unsigned int v43; // edx
  __int64 v44; // rdi
  __int64 v45; // rdx
  unsigned __int64 v46; // rax
  int v47; // r15d
  unsigned __int64 v48; // rax
  unsigned int v49; // r15d
  unsigned int v50; // edx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v55; // [rsp+8h] [rbp-40h]
  unsigned int v56; // [rsp+10h] [rbp-38h]

  v5 = a2;
  v6 = (__int64)a1;
  switch ( a4 )
  {
    case 0:
      v7 = *(_QWORD *)(a3 + 80);
      v8 = 0;
      v9 = v7 < *(_QWORD *)(a3 + 192);
      v10 = v7 - *(_QWORD *)(a3 + 192);
      if ( !v9 )
        v8 = v10;
      if ( (int)a2 > -v8 )
        v5 = a2 - 1;
      goto LABEL_58;
    case 1:
      v40 = a2 + 1;
      if ( (signed int)(a2 + 1) < *(_DWORD *)(a3 + 192) )
        goto LABEL_28;
      goto LABEL_58;
    case 2:
      v28 = alacritty_terminal::term::Term<T>::expand_wide(a3, (unsigned __int64)a1, a2, 0);
      v30 = v29;
      if ( v28 )
        goto LABEL_18;
      v31 = *(_QWORD *)(a3 + 80);
      v32 = 0;
      v9 = v31 < *(_QWORD *)(a3 + 192);
      v33 = v31 - *(_QWORD *)(a3 + 192);
      if ( !v9 )
        v32 = v33;
      if ( v30 <= -v32
        || (v5 = v30 - 1,
            v6 = *(_QWORD *)(a3 + 184) - 1LL,
            is_wrap = alacritty_terminal::vi_mode::is_wrap(a3, v6),
            v28 = 0LL,
            !is_wrap) )
      {
LABEL_18:
        v6 = 0LL;
        v9 = v28 == 0;
        v35 = v28 - 1;
        if ( !v9 )
          v6 = v35;
        v5 = v30;
      }
      goto LABEL_58;
    case 3:
      v38 = alacritty_terminal::term::Term<T>::expand_wide(a3, (unsigned __int64)a1, a2, 1);
      v5 = v39;
      if ( (unsigned __int8)alacritty_terminal::vi_mode::is_wrap(a3, v38) )
      {
        ++v5;
        goto LABEL_57;
      }
      v6 = core::cmp::Ord::min(v38 + 1, *(_QWORD *)(a3 + 184) - 1LL);
      goto LABEL_58;
    case 4:
      v23 = alacritty_terminal::term::Term<T>::expand_wide(a3, (unsigned __int64)a1, a2, 0);
      v25 = v24;
      if ( v23 )
      {
        v5 = v24;
      }
      else
      {
        do
        {
          v5 = v25;
          v52 = *(_QWORD *)(a3 + 80);
          v9 = v52 < *(_QWORD *)(a3 + 192);
          v53 = v52 - *(_QWORD *)(a3 + 192);
          if ( v9 )
            LODWORD(v53) = 0;
          if ( v25 <= -(int)v53 )
            break;
          --v25;
        }
        while ( (unsigned __int8)alacritty_terminal::vi_mode::is_wrap(a3, *(_QWORD *)(a3 + 184) - 1LL) );
      }
      goto LABEL_57;
    case 5:
      occupied = alacritty_terminal::vi_mode::last(a3, a1, a2);
      goto LABEL_42;
    case 6:
      occupied = alacritty_terminal::vi_mode::first_occupied(a3, a1, a2);
      goto LABEL_42;
    case 7:
      v6 = 0LL;
      v40 = -*(_DWORD *)(a3 + 200);
      alacritty_terminal::vi_mode::first_occupied_in_line(&v54, a3, v40);
      if ( (_BYTE)v54 )
        v6 = v55;
LABEL_28:
      v5 = v40;
      goto LABEL_58;
    case 8:
      v27 = *(_DWORD *)(a3 + 192) / 2 + ~*(_DWORD *)(a3 + 200);
      goto LABEL_44;
    case 9:
      v27 = *(_DWORD *)(a3 + 192) + ~*(_DWORD *)(a3 + 200);
LABEL_44:
      alacritty_terminal::vi_mode::first_occupied_in_line(&v54, a3, v27);
      if ( (_BYTE)v54 )
        v6 = v55;
      else
        v6 = 0LL;
      v5 = v27;
      goto LABEL_58;
    case 10:
      v19 = a3;
      v20 = v6;
      v21 = v5;
      v22 = 0LL;
      goto LABEL_40;
    case 11:
      v19 = a3;
      v20 = v6;
      v21 = v5;
      v22 = 1LL;
LABEL_40:
      v26 = 0LL;
      goto LABEL_41;
    case 12:
      v19 = a3;
      v20 = v6;
      v21 = v5;
      v22 = 0LL;
      v26 = 1LL;
      goto LABEL_41;
    case 13:
      v19 = a3;
      v20 = v6;
      v21 = v5;
      v22 = 1LL;
      v26 = 1LL;
LABEL_41:
      occupied = alacritty_terminal::vi_mode::semantic(v19, v20, v21, v22, v26);
      goto LABEL_42;
    case 14:
      v15 = a3;
      v16 = v6;
      v17 = v5;
      v18 = 0LL;
      goto LABEL_22;
    case 15:
      v15 = a3;
      v16 = v6;
      v17 = v5;
      v18 = 1LL;
LABEL_22:
      occupied = alacritty_terminal::vi_mode::word(v15, v16, v17, v18, 0LL);
      goto LABEL_42;
    case 16:
      v11 = a3;
      v12 = v6;
      v13 = v5;
      v14 = 0LL;
      goto LABEL_30;
    case 17:
      v11 = a3;
      v12 = v6;
      v13 = v5;
      v14 = 1LL;
LABEL_30:
      occupied = alacritty_terminal::vi_mode::word(v11, v12, v13, v14, 1LL);
LABEL_42:
      v6 = occupied;
      v5 = v37;
      goto LABEL_58;
    case 18:
      alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::bracket_search(
        (__int64)&v54,
        a3,
        a1,
        a2);
      if ( (_BYTE)v54 )
      {
        v5 = v56;
        v6 = v55;
      }
      goto LABEL_58;
    case 19:
      v46 = *(_QWORD *)(a3 + 80);
      v47 = 0;
      v9 = v46 < *(_QWORD *)(a3 + 192);
      v48 = v46 - *(_QWORD *)(a3 + 192);
      if ( !v9 )
        v47 = v48;
      v49 = -v47;
      v55 = __PAIR64__(a2, v49);
      LOBYTE(v56) = 0;
      v54 = a3;
      v42 = a3;
      if ( (((__int64 (__fastcall *)(__int64 *, __int64))<core::iter::adapters::skip_while::SkipWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold)(
              &v54,
              a3) & 1) != 0 )
      {
        v44 = 1LL;
        v42 = v50;
      }
      else
      {
        v44 = 0LL;
      }
      v45 = v49;
      goto LABEL_56;
    case 20:
      v41 = *(_DWORD *)(a3 + 192) - 1;
      v55 = __PAIR64__(v41, a2);
      LOBYTE(v56) = 0;
      v54 = a3;
      v42 = a3;
      if ( (((__int64 (__fastcall *)(__int64 *, __int64))<core::iter::adapters::skip_while::SkipWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold)(
              &v54,
              a3) & 1) != 0 )
      {
        v44 = 1LL;
        v42 = v43;
      }
      else
      {
        v44 = 0LL;
      }
      v45 = v41;
LABEL_56:
      v5 = core::option::Option<T>::map_or(v44, v42, v45);
LABEL_57:
      v6 = 0LL;
LABEL_58:
      alacritty_terminal::term::Term<T>::scroll_to_point(a3, v5);
      return v6;
  }
}