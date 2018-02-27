


#ifndef _PIPE_MANAGER_HPP_
#define _PIPE_MANAGER_HPP_
#include <map>
#include <iterator>
#include <iostream>
#include "Pipe.hpp"
#include "SourceData.hpp"

using namespace hurakan::core;
namespace huracan{
   namespace core{


	class DefaultPipeManagerConfig{


	};

	class DefaultPipeConfig{
	
	};
	
	template<typename ParamKey,typename ParamValue>
	class PipeParameters{
		private:
			std::map<ParamKey,ParamValue> params_;
		public:
			PipeParameters(std::map<ParamKey,ParamValue> params):params_(params){
			}

			ParamValue getValue(ParamKey key){
				typename std::map<ParamKey,ParamValue>::iterator valueIter = this->params.find(key);
				if(valueIter != params_.end()){
					return valueIter->second;
				}else{
					return nullptr;
				}
			}
	};


	class PipeManager{
		protected:
			virtual void initializePipeManager(DefaultPipeManagerConfig &initializationConfig) = 0;
		public:
			virtual  Pipe[] initializePipes(DefaultPipeConfig &initializationConfig,
							PipeParameters &pipeParameters) = 0;
			template<typename D>
			virtual	 SourceData<D> pollPipeForData(Pipe &pipe) = 0;	

	};

   }
}



#endif
