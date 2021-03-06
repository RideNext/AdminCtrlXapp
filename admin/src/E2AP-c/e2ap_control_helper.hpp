#ifndef CONTROL_HELPER_H
#define CONTROL_HELPER_H

typedef struct ric_control_helper ric_control_helper;

struct ric_control_helper{
  ric_control_helper(void):req_id(1), req_seq_no(1), func_id(0), action_id(1), control_ack(1), cause(0), sub_cause(0), control_status(1), control_msg(0), control_msg_size(0), control_header(0), control_header_size(0), call_process_id(0), call_process_id_size(0){};
  
  long int req_id, req_seq_no, func_id, action_id,  control_ack, cause, sub_cause, control_status;
  
  unsigned char* control_msg;
  size_t control_msg_size;
  
  unsigned char* control_header;
  size_t control_header_size;
  
  unsigned char *call_process_id;
  size_t call_process_id_size;
  
};

#endif
