


#ifndef PIPE_HPP
#define PIPE_HPP

#include<string> 

namespace huracan{
                namespace core{
			class Pipe{
				int pipe_id_;
				std::string remote_ip_;
				int remote_port_;
				Pipe(int pipe_id,std::string remote_ip,int remote_port)
					:pipe_id_(pipe_id),remote_ip_(remote_ip),
					 remote_port_(remote_port){
				}
				std::string getRemoteId(){
					return remote_ip_;
				}
				int getRemotePort(){
					return remote_port_;
				}
			};
                }
}
#endif
