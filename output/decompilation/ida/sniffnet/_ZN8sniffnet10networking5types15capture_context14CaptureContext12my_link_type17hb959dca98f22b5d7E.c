__int64 __fastcall sniffnet::networking::types::capture_context::CaptureContext::my_link_type(_QWORD *a1)
{
  int v1; // edx
  __int64 result; // rax

  switch ( *a1 )
  {
    case 0LL:
      v1 = pcap_datalink(a1[1]);
      result = 8LL;
      if ( v1 > 112 )
      {
        if ( v1 > 228 )
          goto LABEL_31;
        if ( v1 == 113 )
          goto LABEL_34;
        if ( v1 == 228 )
          result = 4LL;
      }
      else
      {
        if ( (unsigned int)v1 < 2 )
          goto LABEL_18;
        if ( v1 == 12 )
          goto LABEL_37;
        if ( v1 == 108 )
          result = 3LL;
      }
      break;
    case 1LL:
      v1 = pcap_datalink(a1[2]);
      result = 8LL;
      if ( v1 > 112 )
      {
        if ( v1 > 228 )
          goto LABEL_31;
        if ( v1 == 113 )
          goto LABEL_34;
        if ( v1 == 228 )
          result = 4LL;
      }
      else
      {
        if ( (unsigned int)v1 < 2 )
          goto LABEL_18;
        if ( v1 == 12 )
          goto LABEL_37;
        if ( v1 == 108 )
          result = 3LL;
      }
      break;
    case 2LL:
      v1 = pcap_datalink(a1[1]);
      result = 8LL;
      if ( v1 > 112 )
      {
        if ( v1 > 228 )
        {
LABEL_31:
          if ( v1 == 229 )
          {
            result = 5LL;
          }
          else if ( v1 == 276 )
          {
            result = 7LL;
          }
        }
        else if ( v1 == 113 )
        {
LABEL_34:
          result = 6LL;
        }
        else if ( v1 == 228 )
        {
          result = 4LL;
        }
      }
      else if ( (unsigned int)v1 < 2 )
      {
LABEL_18:
        result = (unsigned int)v1;
      }
      else if ( v1 == 12 )
      {
LABEL_37:
        result = 2LL;
      }
      else if ( v1 == 108 )
      {
        result = 3LL;
      }
      break;
    case 3LL:
      result = 9LL;
      break;
  }
  return result;
}