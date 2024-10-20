_QWORD *__fastcall uu_dircolors::get_colors_format_strings(_QWORD *a1, _BYTE *a2)
{
  __int64 v2; // r12
  void *v3; // r13
  _BYTE *v4; // r14
  __int64 v5; // r12
  __int64 v6; // r15
  void *v7; // r13
  __int64 v9; // [rsp+8h] [rbp-60h] BYREF
  __int64 v10; // [rsp+10h] [rbp-58h]
  void *v11; // [rsp+18h] [rbp-50h]
  __int64 v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]

  switch ( *a2 )
  {
    case 0:
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v9, 11LL, 0LL);
      v2 = v10;
      if ( !v9 )
      {
        v3 = v11;
        v4 = (_BYTE *)(&dword_0 + 1);
        core::intrinsics::copy_nonoverlapping::precondition_check(&unk_28AB6, v11, 1LL, 1LL, 11LL);
        qmemcpy(v3, "LS_COLORS='", 11);
        v12 = v2;
        v13 = (__int64)v3;
        v14 = 11LL;
        v5 = 0LL;
        v6 = 0LL;
        switch ( *a2 )
        {
          case 0:
            goto LABEL_7;
          case 1:
            goto LABEL_9;
          case 2:
            goto LABEL_11;
          case 3:
            goto LABEL_15;
        }
      }
      break;
    case 1:
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v9, 18LL, 0LL);
      v2 = v10;
      if ( !v9 )
      {
        v7 = v11;
        v4 = (_BYTE *)(&dword_0 + 1);
        core::intrinsics::copy_nonoverlapping::precondition_check(&unk_28AC1, v11, 1LL, 1LL, 18LL);
        qmemcpy(v7, "setenv LS_COLORS '", 18);
        v12 = v2;
        v13 = (__int64)v7;
        v14 = 18LL;
        v5 = 0LL;
        v6 = 0LL;
        switch ( *a2 )
        {
          case 0:
            goto LABEL_7;
          case 1:
            goto LABEL_9;
          case 2:
            goto LABEL_11;
          case 3:
            goto LABEL_15;
        }
      }
      break;
    case 2:
      v12 = 0LL;
      v4 = (_BYTE *)(&dword_0 + 1);
      v13 = 1LL;
      v14 = 0LL;
      v5 = 0LL;
      v6 = 0LL;
      switch ( *a2 )
      {
        case 0:
LABEL_7:
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v9, 19LL, 0LL);
          v6 = v10;
          if ( v9 )
            goto LABEL_13;
          v4 = v11;
          v5 = 19LL;
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_28AD3, v11, 1LL, 1LL, 19LL);
          qmemcpy(v4, "';\nexport LS_COLORS", 19);
          break;
        case 1:
LABEL_9:
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v9, 1LL, 0LL);
          v6 = v10;
          if ( v9 )
LABEL_13:
            alloc::raw_vec::handle_error(v6, v11);
          v4 = v11;
          v5 = 1LL;
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_28AE6, v11, 1LL, 1LL, 1LL);
          *v4 = 39;
          break;
        case 2:
          break;
        case 3:
LABEL_15:
          core::panicking::panic(aInternalErrorE_3, 40LL, &off_11D6B8);
      }
LABEL_11:
      a1[2] = v14;
      *a1 = v12;
      a1[1] = v13;
      a1[3] = v6;
      a1[4] = v4;
      a1[5] = v5;
      return a1;
    case 3:
      core::panicking::panic(aInternalErrorE_3, 40LL, &off_11D6D0);
  }
  alloc::raw_vec::handle_error(v2, v11);
}
