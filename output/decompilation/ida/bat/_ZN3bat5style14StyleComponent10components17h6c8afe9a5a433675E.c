void *__fastcall bat::style::StyleComponent::components(char a1, char a2)
{
  void *result; // rax

  switch ( a1 )
  {
    case 0:
      if ( a2 )
        result = (void *)bat::style::StyleComponent::components(10LL, 1LL);
      else
        result = (void *)bat::style::StyleComponent::components(11LL, 0LL);
      break;
    case 1:
      result = &unk_9C5FA;
      break;
    case 2:
      result = &unk_9CC4D;
      break;
    case 3:
      result = &unk_1A2A35;
      break;
    case 4:
    case 5:
      result = &unk_9D824;
      break;
    case 6:
      result = &unk_1A2E33;
      break;
    case 7:
      result = &unk_1A2E34;
      break;
    case 8:
      result = &unk_1A2E35;
      break;
    case 9:
      result = &unk_1A2E36;
      break;
    case 10:
      result = &unk_1A2E3C;
      break;
    case 11:
      result = &dword_0 + 1;
      break;
  }
  return result;
}