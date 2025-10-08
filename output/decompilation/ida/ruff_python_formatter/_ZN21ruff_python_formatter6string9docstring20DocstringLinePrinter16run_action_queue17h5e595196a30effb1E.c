char __fastcall ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rbx
  char result; // al
  __int64 v6; // r15
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rbp
  unsigned __int128 v10; // kr00_16
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  __m256i *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int32 v18; // eax
  __int64 v19; // rax
  __int32 v20; // eax
  __int32 v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // [rsp+0h] [rbp-298h]
  __int64 v26; // [rsp+10h] [rbp-288h]
  __m256i v27; // [rsp+20h] [rbp-278h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-250h]
  __m256i v29; // [rsp+50h] [rbp-248h] BYREF
  int v30; // [rsp+70h] [rbp-228h]
  _BYTE v31[24]; // [rsp+A0h] [rbp-1F8h] BYREF
  __m256i v32; // [rsp+B8h] [rbp-1E0h] BYREF
  __int64 v33; // [rsp+D8h] [rbp-1C0h]
  _BYTE v34[24]; // [rsp+E0h] [rbp-1B8h] BYREF
  __int64 v35; // [rsp+F8h] [rbp-1A0h]
  __int64 v36; // [rsp+100h] [rbp-198h] BYREF
  __int64 v37; // [rsp+108h] [rbp-190h] BYREF
  __int128 v38; // [rsp+110h] [rbp-188h]
  __int128 v39; // [rsp+120h] [rbp-178h]
  __int128 v40; // [rsp+130h] [rbp-168h] BYREF
  __int64 v41; // [rsp+140h] [rbp-158h]
  unsigned __int64 v42; // [rsp+148h] [rbp-150h]
  _QWORD v43[2]; // [rsp+150h] [rbp-148h] BYREF
  unsigned __int128 v44; // [rsp+160h] [rbp-138h] BYREF
  __int64 v45; // [rsp+170h] [rbp-128h]
  __int64 v46; // [rsp+178h] [rbp-120h] BYREF
  unsigned __int128 v47; // [rsp+180h] [rbp-118h]
  __int64 v48; // [rsp+190h] [rbp-108h]
  __int64 v49; // [rsp+198h] [rbp-100h]
  unsigned __int64 v50; // [rsp+1A0h] [rbp-F8h]
  _OWORD v51[2]; // [rsp+1A8h] [rbp-F0h]
  _QWORD v52[4]; // [rsp+1C8h] [rbp-D0h] BYREF
  int v53; // [rsp+1E8h] [rbp-B0h] BYREF
  __int128 v54; // [rsp+1ECh] [rbp-ACh]
  int v55; // [rsp+1FCh] [rbp-9Ch]
  _QWORD v56[4]; // [rsp+200h] [rbp-98h] BYREF
  _QWORD v57[4]; // [rsp+220h] [rbp-78h] BYREF
  __m256i v58; // [rsp+240h] [rbp-58h] BYREF

  v3 = 0x8000000000000001LL;
  alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v46);
  v4 = v46;
  if ( v46 == 0x8000000000000007LL )
  {
LABEL_2:
    core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleAddAction>>(&v46);
    result = a1;
    *(_DWORD *)a1 = 4;
    return result;
  }
  v42 = 0x8000000000000007LL;
  v33 = 0x8000000000000006LL;
  while ( 2 )
  {
    v6 = v48;
    v7 = v4 + v3 - 4;
    if ( v7 >= 4 )
      v7 = 2LL;
    switch ( v7 )
    {
      case 0uLL:
        v29.m256i_i64[0] = 0x8000000000000000LL;
        *(_OWORD *)&v29.m256i_u64[1] = v47;
        v29.m256i_i32[6] = v50;
        v29.m256i_i8[28] = v48 == 0;
        ruff_python_formatter::string::docstring::DocstringLinePrinter::print_one(v34, a2, &v29);
        if ( *(_DWORD *)v34 == 4 )
        {
          core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(&v29);
          goto LABEL_5;
        }
        *(_QWORD *)(a1 + 16) = *(_QWORD *)&v34[16];
        *(_OWORD *)a1 = *(_OWORD *)v34;
        return core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(&v29);
      case 1uLL:
        goto LABEL_5;
      case 2uLL:
        v8 = v3;
        v9 = v49;
        *(_QWORD *)v34 = v4;
        v10 = v47;
        v26 = v10 >> 64;
        v25 = v10;
        *(_OWORD *)&v34[8] = v47;
        v35 = v48;
        v36 = v49;
        _mm_storel_ps((double *)&v37, (__m128)v50);
        v39 = v51[1];
        v38 = v51[0];
        ruff_python_formatter::string::docstring::DocstringLinePrinter::format(&v29, a2, v34);
        *(_OWORD *)v27.m256i_i8 = *(_OWORD *)&v29.m256i_u64[1];
        v27.m256i_i64[2] = v29.m256i_i64[3];
        v11 = v4 ^ 0x8000000000000000LL;
        if ( v29.m256i_i32[0] == 1 )
        {
          v23 = a1;
          *(_QWORD *)(a1 + 16) = v27.m256i_i64[2];
          *(_OWORD *)a1 = *(_OWORD *)v27.m256i_i8;
          result = 1;
          LOBYTE(v23) = 1;
          goto LABEL_56;
        }
        v12 = 1LL;
        if ( v11 < 3 )
          v12 = v4 ^ 0x8000000000000000LL;
        if ( v27.m256i_i64[0] == 0x8000000000000000LL )
        {
          core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<ruff_python_formatter::string::docstring::OutputDocstringLine>>>(&v27);
          if ( v12 )
          {
            v3 = v8;
            if ( v12 == 1 )
            {
              v29.m256i_i64[1] = v4;
              v29.m256i_i64[2] = v25;
              v29.m256i_i64[3] = v26;
            }
            else
            {
              v29.m256i_i64[1] = v25;
              v29.m256i_i64[2] = v26;
              v29.m256i_i64[3] = v6;
            }
            v29.m256i_i64[0] = v33;
            alloc::collections::vec_deque::VecDeque<T,A>::push_front(a2, &v29);
          }
          else
          {
            v29.m256i_i64[1] = v25;
            v29.m256i_i64[2] = v26;
            v29.m256i_i64[3] = v6;
            v29.m256i_i64[0] = v33;
            alloc::collections::vec_deque::VecDeque<T,A>::push_front(a2, &v29);
            v3 = v8;
          }
          goto LABEL_5;
        }
        v41 = v27.m256i_i64[2];
        v40 = *(_OWORD *)v27.m256i_i8;
        *(_BYTE *)(a2 + 148) = 0;
        if ( v12 )
        {
          if ( v12 == 1 )
          {
            v3 = v8;
            if ( (_DWORD)v38 == 5 )
            {
              core::ptr::drop_in_place<ruff_python_formatter::string::docstring::CodeExampleRst>(v4, v25);
              core::ptr::drop_in_place<alloc::vec::Vec<ruff_python_formatter::string::docstring::OutputDocstringLine>>(&v40);
              goto LABEL_5;
            }
            v28 = v4 ^ 0x8000000000000000LL;
            v53 = v38;
            v55 = DWORD1(v51[1]);
            v54 = *(_OWORD *)((char *)v51 + 4);
            v19 = ruff_python_formatter::string::docstring::Indentation::columns(&v53);
            alloc::slice::<impl [T]>::repeat(&v29, v19);
            *(_QWORD *)&v31[16] = v29.m256i_i64[2];
            *(_OWORD *)v31 = *(_OWORD *)v29.m256i_i8;
            <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v27, &v40);
            <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v56, &v27);
            if ( v56[0] != v8 )
            {
              while ( 1 )
              {
                ruff_python_formatter::string::docstring::OutputDocstringLine::map(&v29, v56, v31);
                ruff_python_formatter::string::docstring::DocstringLinePrinter::print_one(&v32, a2, &v29);
                v20 = v32.m256i_i32[0];
                if ( v32.m256i_i32[0] != 4 )
                  break;
                core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(&v29);
                <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v56, &v27);
                if ( v56[0] == v8 )
                  goto LABEL_38;
              }
              *(_DWORD *)(a1 + 20) = v32.m256i_i32[5];
              *(_OWORD *)(a1 + 4) = *(_OWORD *)((char *)v32.m256i_i64 + 4);
              *(_DWORD *)a1 = v20;
              core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(&v29);
              core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<ruff_python_formatter::string::docstring::OutputDocstringLine>>(&v27);
              core::ptr::drop_in_place<alloc::string::String>(v31);
              core::ptr::drop_in_place<ruff_python_formatter::string::docstring::CodeExampleRst>(v4, v25);
              LOBYTE(v23) = 1;
              result = 0;
              goto LABEL_55;
            }
LABEL_38:
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<ruff_python_formatter::string::docstring::OutputDocstringLine>>(&v27);
            core::ptr::drop_in_place<alloc::string::String>(v31);
            v14 = (__m256i *)v25;
            core::ptr::drop_in_place<ruff_python_formatter::string::docstring::CodeExampleRst>(v4, v25);
          }
          else
          {
            v28 = v4 ^ 0x8000000000000000LL;
            v17 = ruff_python_formatter::string::docstring::Indentation::columns(&v36);
            alloc::slice::<impl [T]>::repeat(&v29, v17);
            v3 = v8;
            *(_QWORD *)&v31[16] = v29.m256i_i64[2];
            *(_OWORD *)v31 = *(_OWORD *)v29.m256i_i8;
            <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v27, &v40);
            <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v57, &v27);
            if ( v57[0] != v8 )
            {
              while ( 1 )
              {
                ruff_python_formatter::string::docstring::OutputDocstringLine::map(&v29, v57, v31);
                ruff_python_formatter::string::docstring::DocstringLinePrinter::print_one(&v32, a2, &v29);
                v18 = v32.m256i_i32[0];
                if ( v32.m256i_i32[0] != 4 )
                  break;
                core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(&v29);
                <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v57, &v27);
                if ( v57[0] == v8 )
                  goto LABEL_34;
              }
              *(_DWORD *)(a1 + 20) = v32.m256i_i32[5];
              *(_OWORD *)(a1 + 4) = *(_OWORD *)((char *)v32.m256i_i64 + 4);
              *(_DWORD *)a1 = v18;
              core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(&v29);
              core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<ruff_python_formatter::string::docstring::OutputDocstringLine>>(&v27);
              core::ptr::drop_in_place<alloc::string::String>(v31);
              core::ptr::drop_in_place<ruff_python_formatter::string::docstring::CodeExampleRst>(v25, v26);
              result = 1;
              v23 = 0LL;
              goto LABEL_55;
            }
LABEL_34:
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<ruff_python_formatter::string::docstring::OutputDocstringLine>>(&v27);
            core::ptr::drop_in_place<alloc::string::String>(v31);
            v14 = (__m256i *)v26;
            core::ptr::drop_in_place<ruff_python_formatter::string::docstring::CodeExampleRst>(v25, v26);
          }
LABEL_45:
          if ( v4 == 0x8000000000000000LL )
            goto LABEL_46;
LABEL_5:
          alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v46);
          v4 = v46;
          if ( v46 == v42 )
            goto LABEL_2;
          continue;
        }
        v28 = v4 ^ 0x8000000000000000LL;
        v43[0] = v9;
        v43[1] = v37;
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v32, &v40);
        v14 = &v32;
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v29, &v32);
        v3 = v8;
        if ( v29.m256i_i64[0] == v8 )
        {
          core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::OutputDocstringLine>>(&v29);
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<ruff_python_formatter::string::docstring::OutputDocstringLine>>(&v32);
LABEL_46:
          core::ptr::drop_in_place<ruff_python_formatter::string::docstring::CodeExampleKind>(v34, v14, v15, v16);
          goto LABEL_5;
        }
        v58 = v29;
        ruff_python_formatter::string::docstring::OutputDocstringLine::map(&v29, &v58, v43);
        ruff_python_formatter::string::docstring::DocstringLinePrinter::print_one(&v27, a2, &v29);
        v21 = v27.m256i_i32[0];
        if ( v27.m256i_i32[0] == 4 )
        {
          core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(&v29);
          v27 = v32;
          while ( 1 )
          {
            v14 = &v27;
            <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v52, &v27);
            if ( v52[0] == v8 )
              break;
            ruff_python_formatter::string::docstring::OutputDocstringLine::map(&v29, v52, v43);
            ruff_python_formatter::string::docstring::DocstringLinePrinter::print_one(v31, a2, &v29);
            v22 = *(_DWORD *)v31;
            if ( *(_DWORD *)v31 != 4 )
            {
              *(_DWORD *)(a1 + 20) = *(_DWORD *)&v31[20];
              *(_OWORD *)(a1 + 4) = *(_OWORD *)&v31[4];
              *(_DWORD *)a1 = v22;
              core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(&v29);
              core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<ruff_python_formatter::string::docstring::OutputDocstringLine>>(&v27);
              goto LABEL_54;
            }
            core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(&v29);
          }
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<ruff_python_formatter::string::docstring::OutputDocstringLine>>(&v27);
          goto LABEL_45;
        }
        *(_DWORD *)(a1 + 20) = v27.m256i_i32[5];
        *(_OWORD *)(a1 + 4) = *(_OWORD *)((char *)v27.m256i_i64 + 4);
        *(_DWORD *)a1 = v21;
        core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(&v29);
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<ruff_python_formatter::string::docstring::OutputDocstringLine>>(&v32);
LABEL_54:
        result = 1;
        LOBYTE(v23) = 1;
LABEL_55:
        v11 = v28;
LABEL_56:
        v24 = 1LL;
        if ( v11 < 3 )
          v24 = v11;
        if ( !v24 )
          return core::ptr::drop_in_place<ruff_python_formatter::string::docstring::CodeExampleKind>(v34, v11, 0LL, v23);
        if ( v24 == 1 )
        {
          if ( result )
            return core::ptr::drop_in_place<ruff_python_formatter::string::docstring::CodeExampleRst>(v4, v25);
        }
        else if ( (_BYTE)v23 )
        {
          return core::ptr::drop_in_place<ruff_python_formatter::string::docstring::CodeExampleRst>(v25, v26);
        }
        return result;
      case 3uLL:
        v44 = v47;
        v45 = v48;
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v27, &v44);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v29, &v27);
        v13 = v29.m256i_i64[0];
        if ( !v29.m256i_i64[0] )
          goto LABEL_4;
        while ( 1 )
        {
          *(_QWORD *)v34 = 0x8000000000000000LL;
          *(_QWORD *)&v34[8] = v13;
          *(_QWORD *)&v34[16] = v29.m256i_i64[1];
          LODWORD(v35) = v30;
          BYTE4(v35) = v29.m256i_i64[2] == 0;
          ruff_python_formatter::string::docstring::DocstringLinePrinter::print_one(&v32, a2, v34);
          if ( v32.m256i_i32[0] != 4 )
            break;
          core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(v34);
          <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v29, &v27);
          v13 = v29.m256i_i64[0];
          if ( !v29.m256i_i64[0] )
          {
LABEL_4:
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<ruff_python_formatter::string::docstring::CodeExampleLine>>(&v27);
            goto LABEL_5;
          }
        }
        *(_QWORD *)(a1 + 16) = v32.m256i_i64[2];
        *(_OWORD *)a1 = *(_OWORD *)v32.m256i_i8;
        core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(v34);
        return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<ruff_python_formatter::string::docstring::CodeExampleLine>>(&v27);
    }
  }
}