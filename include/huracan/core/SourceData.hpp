



#ifndef _SOURCE_DATA_HPP_
#define _SOURCE_DATA_HPP_



namespace hurakan {
	namespace core{
		template<typename D>
		class SourceData{
			int m_source_id;
			D * data;
			SourceData(D &data){
				this->data = data;
			}
		};
	}
}

#endif
