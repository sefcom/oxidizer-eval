__int64 __fastcall sniffnet::networking::types::capture_context::CaptureContext::consume(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rax
  char *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  char v6; // si
  __int64 result; // rax

  switch ( *a2 )
  {
    case 0LL:
      v2 = a2 + 1;
      v3 = (char *)(a2 + 2);
      v4 = 0LL;
      goto LABEL_4;
    case 1LL:
      v2 = a2 + 2;
      v5 = a2[1];
      v3 = (char *)(a2 + 3);
      v4 = 0LL;
      goto LABEL_6;
    case 2LL:
      v2 = a2 + 1;
      v3 = (char *)(a2 + 2);
      v4 = 1LL;
LABEL_4:
      v5 = 0LL;
LABEL_6:
      v6 = *v3;
      result = *v2;
      *(_QWORD *)a1 = v4;
      *(_QWORD *)(a1 + 8) = result;
      *(_BYTE *)(a1 + 16) = v6;
      *(_QWORD *)(a1 + 24) = v5;
      return result;
    case 3LL:
      sniffnet::networking::types::capture_context::CaptureContext::consume::panic_cold_explicit(a1);
  }
}